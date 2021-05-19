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
    
    // Insertion starts from beginning only
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    for(i = size-1; i>=0; i--){
        a[i+1] = a[i];
    }

    a[0] = num;
    size++;
    
    for(i = 0; i<size;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}