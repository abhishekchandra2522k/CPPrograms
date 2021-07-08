#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
        int isPalindrome(string S){
            string N = S;
            int l = 0;
            int e = N.size() - 1;
            while(l < e){
                swap(N[l], N[e]);
                l++;
                e--;
            } 
            if(N == S){
                return 1;
            }
            return 0;
        }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        Solution ob;

        cout<<ob.isPalindrome(s)<<"\n";
    }
    return  0;
}