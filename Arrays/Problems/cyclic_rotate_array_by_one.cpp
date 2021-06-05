#include<bits/stdc++.h>

using namespace std;

void cyclic_rotate(int *a, int n){
    int temp = a[n-1];
    for(int i = n-2; i >= 0; i--){
        a[i+1] = a[i];
    }
    a[0] = temp;
}

int main(){
    int a[50],size;
    cout<<"Enter size : ";
    cin>>size;
    if(size <= 50 && size >= 0){
        cout<<"Enter elements : ";
        for(int i = 0; i < size; i++){
            cin>>a[i];
        }
        cyclic_rotate(a,size);
        for(int i = 0; i < size; i++){
            cout<<a[i]<<" ";
        }
    }else{
        cout<<"Range error: index out of bound.";
    }
    return 0;
}