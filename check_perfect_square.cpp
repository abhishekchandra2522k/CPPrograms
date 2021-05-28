#include<bits/stdc++.h>
#include<cmath>

using namespace std;

void check_perfect_square(int data){  
    if(fmod(sqrt(data),1) == 0){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}

int main(){
    int data;
    int t;
    cin>>t;
    while(t--){
        cin>>data;
        check_perfect_square(data);
    }
    return 0;
}