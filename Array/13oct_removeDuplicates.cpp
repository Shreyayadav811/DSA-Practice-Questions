/*
Problem: remove duplicates
lInk: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

time complexity: O(n)

approach: simply iterate throught the array and see if previous element is same as current element using two pointers, if same replace it by the current one
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[p] = nums[i];
                p++;
            }
        }
        return p;
    }
};
