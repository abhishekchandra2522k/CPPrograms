#include<bits/stdc++.h>

using namespace std;

int reverse_num(int m){
    int k = 0;
    while(m != 0){
        k = k*10 + m % 10;
        m /= 10;
    }
    return k;
}

int main(){
    int k;
    cin>>k;
    cout<<reverse_num(k);
    return 0;
}