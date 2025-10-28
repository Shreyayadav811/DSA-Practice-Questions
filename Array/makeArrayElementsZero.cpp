class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                int rightSum = totalSum - leftSum;
                if (leftSum == rightSum)
                    ans += 2;
                else if (abs(leftSum - rightSum) == 1)
                    ans += 1;
            }
            leftSum += nums[i];
        }
        return ans;
    }
};
