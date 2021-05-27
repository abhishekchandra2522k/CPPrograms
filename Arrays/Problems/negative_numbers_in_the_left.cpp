#include<bits/stdc++.h>

using namespace std;

void rearrange(int* a, int n){
    int min_ind;
    for(int i = 0; i < n - 1; i++){
        min_ind = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < 0){
                min_ind = j;
            }
        }
        swap(a[min_ind],a[i]);
    }
}

void print_arr(int* a, int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
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
        rearrange(a,size);
        print_arr(a,size);
    }else{
        cout<<"Range error: Size out of bound";
    }
    return 0;
}