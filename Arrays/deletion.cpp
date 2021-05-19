#include<iostream>

using namespace std;

int main(){
    int a[50], i, size;

    cout<<"Enter size of the array : ";
    cin>>size;
    

    if(size <= 50){
        for(i = 0; i < size; i++){
            cin>>a[i];
        }
        // Deletion Of data at postion 'pos'  
        // Time Complexity O(n-p), best case - unsorted array O(1)
        int pos;
        cout<<"Enter position: ";
        cin>>pos;
        if(pos >= 0 && pos <= size){
            int item = a[pos-1];
            for(i=pos-1; i < size-1; i++){
                a[i] = a[i+1];
            }

            size--;

            for(i = 0; i < size; i++){
                cout<<a[i]<<" ";
            }

            cout<<"\nDeleted item: "<<item;
        }else{
            cout<<"Error : Invalid Position";
        } 

        // Deletion at end
        /*
            size--;
        */

        // Deletion from beginning
        /*
            for(i = 0; i < size-1; i++){
                a[i] = a[i+1];
            }

            size--;
        */
    }else{
        cout<<"Index Error: Size out of bound";
    }
    return 0;
}