#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> f;
        for(int i = 0; i < s.size(); i++){
            f[s[i]]++;
        }
        for(int i = 0; i < s.size(); i++){
            if(f[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};