#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = nums[0];
        for(int i = 0; i < nums.size() -1; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        return res;
    }
};