class Solution {
public:

    int sol(int ind, vector<int>& arr, vector<int>& dp) {

        if(ind == 0) return arr[0];

        if(ind < 0) return 0;

        if(dp[ind] != -1) {
            return dp[ind];
        }

        int pick = arr[ind] + sol(ind - 2, arr, dp);

        int notpick = 0 + sol(ind - 1, arr, dp);

        return dp[ind] = max(pick, notpick);
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        if(n == 1) return nums[0];

        vector<int> temp1;
        vector<int> temp2;

        // Exclude first
        for(int i = 1; i < n; i++) {
            temp1.push_back(nums[i]);
        }

        // Exclude last
        for(int i = 0; i < n - 1; i++) {
            temp2.push_back(nums[i]);
        }

        vector<int> dp1(temp1.size(), -1);
        vector<int> dp2(temp2.size(), -1);

        int ans1 = sol(temp1.size() - 1, temp1, dp1);
        int ans2 = sol(temp2.size() - 1, temp2, dp2);

        return max(ans1, ans2);
    }
};