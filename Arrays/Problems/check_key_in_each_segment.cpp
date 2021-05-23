#include<iostream>

using namespace std;

bool check_key(int arr[], int x, int k, int n){ // x : key, k: interval, n: size
    int i;
    for(i = 0; i < n; i+=k){
        int j;
        for(j = 0; j < k; j++){
            if(arr[i+j] == x){
                break;
            }

            if(j == k){
                return false;
            }
        }
    }
    // when n is mutilple of k
    if(i == n){
        return true;
    }

    // checking the last segment of array if n is not multiple of k
    int j;
    for(j = i - k; j < n; j++){
        if(arr[j] == x){
            break;
        }
    }
    if(j == n){
        return false;
    }
    return true;
}

int main(){
    int a[50],size;
    cout<<"Enter size : ";
    cin>>size;
    if(size <= 50 && size >= 0){
        cout<<"Enter elements : ";
        for(int i = 0; i < size; ++i){
            cin>>a[i];
        }
    }else{
        cout<<"Error : Size out of range\n";
        return 0;
    }
    int key;
    cout<<"Enter Key : ";
    cin>>key;
    int x;
    cout<<"Enter interval : ";
    cin>>x;
    
    if(check_key(a,key,x,size)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

    return 0;
}