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
    
    // Insertion at position 'pos' and index 'pos-1'  
    // Time Complexity - O(n-p), best case - O(1)
    int num, pos;
    cout<<"\nEnter number and position : ";
    cin>>num>>pos;
    if(pos >= 0 && pos <= size+1){
        for(i = size-1; i>=pos-1; i--){
            a[i+1] = a[i];
        }
        a[pos-1] = num;
        size++;
        for(i = 0; i<size;i++){
            cout<<a[i]<<" ";
        }
    }else{
        cout<<"Error : Invalid position\n";
    }
    
    /*
    Less complexity code for unsorted array, where order doesn't matter
    a[size] = a[pos-1]
    a[pos-1] = num

    Time Complexity : O(1) rather than O(n-p), where n is size of the array and p is the position
    */

    return 0;
}