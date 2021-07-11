#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, e = s.size() - 1; // obv we can use reverse(s.begin(), s.end());
        while(l < e){
            swap(s[l], s[e]);
            l++;
            e--;
        }
        
    }
};