#include<stdio.h>

int largest(int arr[], int n);

int main(){
    int arr[1000];
    int i, t, n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i = 0; i < n; i++) scanf("%d", &arr[i]);
        printf("%d", largest(arr, n));
        printf("\n");
    }
    return 0;
}

int largest(int arr[], int n){
    int max = arr[0];
    int i = 0;
    while(i < n){
        if(max < arr[i]){
            max = arr[i];
        }
        i++;
    }
    return max;
}