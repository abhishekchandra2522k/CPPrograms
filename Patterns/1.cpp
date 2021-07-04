#include<iostream>

using namespace std;

int main(){
    int i, j;

    for(i = 0; i < 5; ++i){
        for(j = 0; j < 5; ++j){
            if(i>=j){
                cout<<"*"<<"\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
    return 0;
}

/*
OUTPUT:

*
*       *
*       *       *
*       *       *       *
*       *       *       *       * 

*/