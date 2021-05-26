#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int* a, int n){
    int i,j,min_ind;

    for(i = 0; i < n-1; i++){
        min_ind = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_ind]){
                min_ind = j;
            }
        }
        swap(&a[min_ind], &a[i]);
    }
}

void print_arr(int* a, int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[50], size;
    cout<<"Enter size : ";
    cin>>size;
    if(size <= 50 && size >= 0){
        bool flag = true;
        cout<<"Enter elements : ";
        for(int i = 0; i < size; i++){
            cin>>a[i];
        }
        for(int i = 0; i < size; i++){
            if(a[i] == 0 || a[i] == 1 || a[i] == 2){
                continue;
            }else{
                flag = false;
                cout<<"Enter only 0s, 1s & 2s."<<endl;
                break;
            }
        }
        if(flag){
            selection_sort(a,size);
            print_arr(a,size);
        }
    }else{
        cout<<"Range error: size out of bound";
    }
    return 0;
}