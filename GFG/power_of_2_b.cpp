#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    bool isPowerofTwo(long long n){
        if(n == 0){
            return false;
        }
        return (ceil(log2(n)) == floor(log2(n)));
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