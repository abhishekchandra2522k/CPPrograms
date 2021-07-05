#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        for(int i =0, j = s.size() - 1; i < j;){
            if(isalnum(s[i]) == false){
                i++;
            }else if(isalnum(s[j]) == false){
                j--;
            }else if(toupper(s[i++]) != toupper(s[j--])){
                return false;
            }
        }
        return true;
    }
};