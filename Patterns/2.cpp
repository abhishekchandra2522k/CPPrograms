#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            if(j >= 5 - i + 1){
                cout<<"*"<<"\t";
            }else{
                cout<<" "<<"\t";
            }

        }
        cout<<endl;
    }
    return 0;
}

/*

                                *
                        *       *
                *       *       *
        *       *       *       *
*       *       *       *       *

*/