#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void iter(vector<int>::iterator it1, vector<int>::iterator it2);

void iter(vector<int>::iterator it1, vector<int>::iterator it2){
    for(; it1 != it2; it1++){
        cout<<*it1<<" ";
    }
    cout<<endl;
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
        iter(v.begin(), v.end());
    }
    return 0;
}