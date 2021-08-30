#include<iostream>

using namespace std;

template<class X, class Y>
X big(X a, Y b){ // different data types
    if(a >b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout<<big(4,3.4)<<endl; // passing different data types to a function
    cout<<big(1.99,-5);
    return 0;
}