#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int miN(int a[], int n){
    return (n==1)? a[0] : min(a[0], miN(a + 1, n-1));
}

int maX(int a[], int n){
    return (n==1)? a[0] : max(a[0], maX(a+1, n-1));
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