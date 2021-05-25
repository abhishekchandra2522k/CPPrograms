#include<iostream>

using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int* a, int n){
    int i,j, min_ind;

    for(i = 0; i < n - 1; i++){
        min_ind = i;
        for(j = i + 1; j < n; j++){
            if(a[j] < a[min_ind]){
                min_ind = j;
            }
        }
        swap(&a[min_ind],&a[i]);
    }
}

int main(){
    int a[50], k, size, k2;
    cout<<"Enter size : ";
    cin>>size;
    if(size <= 50 && size >=0){
        cout<<"Enter elements : ";
        for(int i = 0; i < size; i++){
            cin>>a[i];
        }
        selection_sort(a,size);
        cout<<"Enter k to find kth smallest element : ";
        cin>>k;
        cout<<a[k-1]<<endl;
        cout<<"Enter k2 to find k2th largest element : ";
        cin>>k2;
        cout<<a[size-k2]<<endl;
    }else{
        cout<<"Index Error : Size out of range";
    }

    return 0;
}