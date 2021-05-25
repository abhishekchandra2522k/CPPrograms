#include<iostream>

using namespace std;

int occurance(int* a, int n, int k){
    int count = 0;
    for(int i = 0; i < n ; i++){
        if(a[i] == k){
            count++;
        }
    }
    return count;
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
        int k;
        cout<<"Enter element to finds it's count : ";
        cin>>k;
        if(occurance(a, size, k)){
            cout<<occurance(a,size,k)<<endl;
        }else{
            cout<<"Element not found : 0 occurance"<<endl;
        }
    }else{
        cout<<"Index error: size out of range"<<endl;
    }
    return 0;
}