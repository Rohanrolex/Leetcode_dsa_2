class Solution {
public:

    int solve(int index, vector<int>& nums, int sum, int target,
              vector<vector<int>>& dp) {

        // All elements used
        if (index == nums.size()) {
            return sum == target;
        }

        int offset = 1000;

        if (dp[index][sum + offset] != -1)
            return dp[index][sum + offset];

        // Take '+'
        int plus = solve(index + 1, nums,
                         sum + nums[index], target, dp);

        // Take '-'
        int minus = solve(index + 1, nums,
                          sum - nums[index], target, dp);

        return dp[index][sum + offset] = plus + minus;
    }

    int findTargetSumWays(vector<int>& nums, int target) {

        int n = nums.size();

        // sum can be from -1000 to +1000
        vector<vector<int>> dp(n, vector<int>(2001, -1));

        return solve(0, nums, 0, target, dp);
    }
};