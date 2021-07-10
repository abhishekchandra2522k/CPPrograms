#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


void selection_sort(int* a, int n){
    int i,j,min_ind;

    for(int i = 0; i < n-1; i++){
        min_ind = i;
        for(int j = i + i; j < n; j++){
            if(a[j] < a[min_ind]){
                min_ind = j;
            }
        }
        swap(&a[min_ind],&a[i]);
    }

}

void print_array(int* a, int n){
    for(int i = 0; i < n; ++i){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[50],size;
    cout<<"Enter size ";
    cin>>size;
    if(size <= 50 && size >= 0){
        for(int i = 0; i < size; ++i){
            cin>>a[i];
        }

        selection_sort(a,size);
        print_array(a,size);
    }else{
        cout<<"Index error: size out of bound";
    }
    return 0;
}