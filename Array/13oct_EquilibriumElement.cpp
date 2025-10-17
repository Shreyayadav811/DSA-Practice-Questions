/*
Problem: find pivot index
Link: https://leetcode.com/problems/find-pivot-index/description/
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for(int num:nums) totalSum += nums[i];

        int leftSum = 0;
        for(int i=0; i<nums.size()-1; i++){
            int rightSum = totalSum-leftSum-nums[i];
            if(leftSum == rightSum) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};
