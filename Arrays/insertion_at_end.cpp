#include<iostream>

using namespace std;

int main(){
    int a[50], size, i;
    cin>>size;
    if(size<=50){
        for(i = 0; i< size; ++i){
            cin>>a[i];
        }
        // Traversal
        for(i = 0; i < size; ++i){
            cout<<a[i]<<" ";   
        }
    }else{
        cout<<"IndexError : Size out of bounds"<<endl;
    }
    
    // Insertion at end of an array
    int num;
    cout<<"\nEnter number : ";
    cin>>num;
    a[size] = num;
    size++;
    for(i = 0; i<size;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}