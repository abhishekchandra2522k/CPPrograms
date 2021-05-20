#include<iostream>

using namespace std;

int main(){
    int a[] = {5,8,7,8,9};
    int *p;
    p = a;  // Valid in case of arrays but not valid in case of single integer values.
    // cout<<&a[0]<<endl<<p;  // Prints the base address of an array
    for(int i = 0; i < 5; i++){
        cout<<&a[i]<<endl; 
    }

    for(int i = 0; i < 5; i++){
        cout<<*(a+i)<<*(p+i); // Accessing array elements through pointer a[i] = *(a+i) or *(p+i) or *(i+a) or i[a]
        cout<<i[a];
        cout<<&p[i];
    }
    cout<<2[a]<<endl; 

    cout<<endl<<&a + 1; // Gives address of next byte after array's last element
    cout<<endl<<*(a+1);
    cout<<endl<<*a+1;
    cout<<(*p/2); // 
    
    return 0;
}