#include<bits/stdc++.h>

using namespace std;

// If n is power of 2 then it will only have 1 set bit. while n-1 will have all set bits except the bit which is set in n.

class Solution{
    public:
    bool isPowerofTwo(long long n){
        // if n == 0 it will return 0 (false), while if n > 0 we will 
        return n && (!(n&(n-1)));     // if n = 4 (bit rep : 100) n-1 = 3 (bit rep = 011)  n & (n-1) == 0 if n is power of 2 
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