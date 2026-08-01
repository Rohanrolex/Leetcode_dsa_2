class Solution {
public:

int ans(vector<int> & nums , vector<vector<int>>&dp , int i ,int j )
{
      if(i == j ) return nums[i]; //only single ele in the array

      if(dp[i][j] != -1) return dp[i][j];

      int leftchoose = nums[i] - ans(nums , dp , i+1 , j);
      int rightchoose = nums[j] - ans(nums , dp , i , j-1);

      return  dp[i][j] = max(leftchoose , rightchoose);


}
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();

       vector<vector<int>>dp(n , vector<int>(n , -1));
       return ans(nums,  dp , 0 , n-1) >=0 ;
    }
};