#include<bits/stdc++.h>

using namespace std;

void leftRotatebyone(int arr[], int n){
    int temp = arr[n-1];
    for(int i = n-1; i >= 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

void leftRotate(int arr[], int n, int d){
    d = d % n;
    for(int i = 0; i < d ; i++){
        leftRotatebyone(arr, n);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d;
    cin>>d;
    leftRotate(arr,n,d);
    printArray(arr,n);
    return 0;
}