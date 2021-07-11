#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    long long int nthFibonacci(long long n){
        int a = 0, b = 1, c, i; 
        if(n == 0){
            return a;
        }
        for(i = 2; i <= n; i++){
            c = (a + b) % 1000000007;
            a = b;
            b = c;
        }
        return b;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}