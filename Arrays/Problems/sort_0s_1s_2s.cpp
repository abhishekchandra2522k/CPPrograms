#include<bits/stdc++.h>

using namespace std;

int freq(int* a, int n, int k){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == k){
            count++;
        }
    }
    return count;
}

void print_arr(int* a, int n){
    for(int i = 0; i < n; ++i){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[50], size;
    cout<<"Enter size : ";
    cin>>size;
    if(size <= 50 && size >= 0){
        int count = 0;
        cout<<"Enter elements : ";
        for(int i = 0; i < size; i++){
            cin>>a[i];
        }
        int count_0 = freq(a,size,0);
        int count_1 = freq(a,size,1);
        int count_2 = freq(a,size,2);
        for(int j = 0; j < size; j++){
            if(j < count_0){
                a[j] = 0;
            }else if(j < count_0 + count_1){
                a[j] = 1;
            }else if(j < count_0 + count_1 + count_2){
                a[j] = 2;
            }
            
        }
        print_arr(a,size);
    }else{
        cout<<"Range error: size out of bound"<<endl;
    }
    return 0;
}