#include<iostream>

using namespace std;

template <class X>
X big(X a, X b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout<<big(1,2)<<endl;
    cout<<big(2.5,1.00)<<endl;
    cout<<big('a','z')<<endl;
    return 0;
}