#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    bool isPowerofTwo(long long n){
        bool flag = false;
        double x = n;
        while(x > 2){
            x = x / 2;
        }
        if(x == 2){
            flag = true;
        }
        if(n == 1){
            flag = true;
        }
        return flag;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        Solution ob;
        if(ob.isPowerofTwo(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}