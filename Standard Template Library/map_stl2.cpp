#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> mp;
    for(int i = 1; i <= 5; i++){
        mp.insert({i,0});
    }

    map<int,int> :: iterator itr;
    for(itr = mp.begin(); itr != mp.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}