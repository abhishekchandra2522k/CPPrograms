#include<iostream>

using namespace std;

int main(){
    int a[3][3] = {1,2,3,4,5,6,7,8,9}; 
    // It is stored in the memory by a[0] --> a[0][0] a[0][1] a[0][2]
                                //   a[1] --> a[1][0] a[1][1] a[1][2]
                                //   a[2] --> a[2][0] a[2][1] a[2][2]
                                // 2d array is array of arrays.
    int *p;
    p = a[0];
    // p = a; this statement is not correct because it returns pointer to 1d array not an integer variable
    for(int i = 0; i < 3; i++)
        cout<<a[i]<<endl; // p,a,&a[0][0],&a,*a,a[0]
    
    cout<<a+1<<endl;
    cout<<*a<<endl;
    cout<<*(a+1) + 2<<endl;
    cout<<*(*(a+1) + 2)<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<*(*(a+i)+j)<<endl; // *(a[i] + j)
        }
    }
    cout<<*(*a + 1);
    cout<<**a<<endl<<*p;
    return 0;
}