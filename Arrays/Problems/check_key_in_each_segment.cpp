#include<iostream>

using namespace std;

void check_key(int arr[], int key, int x, int n){
    int count = 0;
    int y = 0;
    for(int i = 0; i < n; i++){
        count++;
        if(count == x){
            y = 0;
            count = 0;
            continue;
        }

        if(arr[i] == key){
            y++;
        }
        if(y == x){

        }
    }
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
    
    check_key(a,key,x,size);

    return 0;
}