#include<iostream>

using namespace std;

int main(){
    int b = 10;
    int *p;
    p = &b;

    cout<<*p; // * : derefrencing operator -> prints value of b
    cout<<p<<endl<<&b;  // Prints address in hexadecimal form
    return 0;
}