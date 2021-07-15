#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    long long int fibSum(int N){
        long long int a = 0, b = 1, c = 0, sum = 1;
        if(N == 0){
            return a;
        }else if(N == 1){
            return b;
        }
        while(N >= 2){
            c = (a+b) % 1000000007;
            sum = (sum + c) % 1000000007;
            a = b;
            b = c;
            N--;
        }
        return sum;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0;
}