#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> sortVector(vector<int> v);
vector<int> reverseVector(vector<int> v);

vector<int> sortVector(vector<int> v){
    sort(v.begin(), v.end());
    return v;
}

vector<int> reverseVector(vector<int> v){
    reverse(v.begin(), v.end());
    return v;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        v = sortVector(v);

        for(auto x : v){
            cout<<x<<" ";
        }
        cout<<endl;

        v = reverseVector(v);
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}