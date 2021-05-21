#include<iostream>

using namespace std;

int main(){

    // Compile time initialization
    int a[2][3] = {1,2,3,4,5,6};
    int b[2][3] = {{1,2,3}, {4,5,6}};

    int c[][3] = {1,2,3,4,5,6}; // We can leave number of rows blank but,
    // int d[2][] = {1,2,3,4,5,6}; this gives an error

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout<<a[i][j]<<" ";
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }


    // Run time Initialization
    int d[2][3];
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 3; ++j){
            cin>>d[i][j];
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}