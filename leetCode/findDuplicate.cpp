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

/*

Better Solution

Floyd's Cycle Algorithm : Used to find cycle in a linked list

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size() > 1){
            int slow = nums[0];
            int fast = nums[0];
            
            do{
                slow = nums[slow];
                fast = nums[nums[fast]];
            }while(slow != fast);
            fast = nums[0];
            while(fast != slow){
                fast = nums[fast];
                slow = nums[slow];
            }
            return slow;
        }   
        return -1;
    }
};

*/