#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
        int basicDataTypes(string s){
            if(s.size() == 1 && !isdigit(s[0])){
                return sizeof(char);
            }
            if(s.find(".") == string::npos){
                return sizeof(int);
            }
            if(s.find(".") != string::npos){
                int n = s.size();
                int b = s.find(".");
                if(n - b >= 7){
                    return sizeof(double);
                }
                return sizeof(float);
            }
        }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.basicDataTypes(s)<<endl;
    }
    return 0;
}