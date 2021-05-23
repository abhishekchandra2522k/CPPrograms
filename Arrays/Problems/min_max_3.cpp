#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maX(int a[], int n){
    return *max_element(a, a+n);
}

int miN(int a[], int n){
    return *min_element(a,a+n);
}

int main(){
    int a[50],size;
    cout<<"Enter size of the array : ";
    cin>>size;
    if(size <= 50 && size >= 0){
        cout<<"Enter elements : ";
        for(int i = 0; i < size; i++){
            cin>>a[i];
        }

        cout<<"Min : "<<miN(a, size)<<"\nMax : "<<maX(a,size)<<endl;
    }else{
        cout<<"Index Error : Size out of bound";
    }
    return 0;
}