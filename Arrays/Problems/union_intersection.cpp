#include<bits/stdc++.h>

using namespace std;

void union_arr(int* a, int n, int* b, int m){
    int i = 0, j = 0;
    cout<<"UNION : ";
    while(i < n && j < m){
        if(a[i] < b[j]){
            cout<<a[i]<<" ";
            i++;
        }if(a[i] > b[j]){
            cout<<b[j]<<" ";
            j++;
        }if(a[i] == b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    while(i < n){
        cout<<a[i++]<<" ";
    }
    while(j < m){
        cout<<b[j++]<<" ";
    }
}

void intersection_arr(int* a, int n, int* b, int m){
    int i = 0, j = 0;
    cout<<"\nINTERSECTION : ";
    while(i < n && j < m){
        if(a[i] < b[j]){
            i++;
        }else if(a[i] > b[j]){
            j++;
        }else if(a[i] == b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}

int main(){
    int a[50],b[50],n,m;
    cout<<"Enter size of array a,b : ";
    cin>>n>>m;
    cout<<"Enter elements of a : ";
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<"Enter elements of b : ";
    for(int i = 0; i < m; i++){
        cin>>b[i];
    }
    union_arr(a,n,b,m);
    intersection_arr(a,n,b,m);
    return 0;
}