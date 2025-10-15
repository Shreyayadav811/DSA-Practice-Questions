/* Problem: Running sum of 1D array
link: https://leetcode.com/problems/running-sum-of-1d-array/
*/


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> result;
        int sum = 0;
        for(int i =0; i<nums.size(); i++){
            sum = sum + nums[i];
            result.push_back(sum);
        }
        return result;
    }
};
