#include<bits/stdc++.h>

using namespace std;

int count_pairs(vector<int> a, int k){
    map<int, int> mp;
    int count = 0;
    for(int i = 0; i < a.size(); i++){
        if(mp.find(k-a[i]) != mp.end()){
            count += mp[k-a[i]];
        }
        mp[a[i]]++;
    }
    return count;
}

int main(){
    vector<int> a;
    int size, sum;
    cin>>sum;
    cin>>size;
    for(int i = 0; i < size;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout<<count_pairs(a,sum);
    return 0;
}