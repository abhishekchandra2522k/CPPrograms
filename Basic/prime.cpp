#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n <= 1){
        cout<<"Not Prime";
    }
    for(int i = 2; i*i < n; i++){
        if(n % i == 0){
            cout<<"No";
            // break;
        }else{
            cout<<"Yes";
            break;
        }
    }
    return 0;
}