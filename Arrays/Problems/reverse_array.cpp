#include<bits/stdc++.h>

using namespace std;

void rev(int* arr, int n){
    for(int i = 0; i < n/2; ++i){
        swap(arr[i],arr[n-i-1]); // STL in-built Function
    }
}

int main(){
    int a[50], size;
    cout<<"Enter size : ";
    cin>>size;

    if(size <= 50 && size >= 0){
        cout<<"Enter elements : ";
        for(int i = 0; i < size; ++i){
            cin>>a[i];
        }
        rev(a, size);
        for(int i = 0; i < size; ++i){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}