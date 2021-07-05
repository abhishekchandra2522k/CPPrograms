#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first, sec, third;
        first = sec = third = LONG_MIN;
        // map<int, int> check;
        for(int n : nums){
            if(n == first || n == sec || n == third){
                continue;
            }
            if(n > first){
                third = sec;
                sec = first;
                first = n;
            }else if(n > sec){
                third = sec;
                sec = n;
            }else if(n > third){
                third = n;
            }
        }
        
        return third == LONG_MIN? first : third; 
    }
};