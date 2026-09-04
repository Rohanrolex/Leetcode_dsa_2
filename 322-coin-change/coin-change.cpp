class Solution {
public:

int ans(int ind, vector<int>& coins, int amount,  vector<vector<int>> & dp){
  
  int n = coins.size();

  if(amount == 0) return 0;

  if(ind == n){
    return 1e9;
  }

  if(dp[ind][amount] != -1) return dp[ind][amount];

  int take = 1e9;
   if(coins[ind] <= amount) take = 1 + ans(ind , coins ,  amount - coins[ind], dp);

   int nottake = 0 + ans(ind+1, coins, amount, dp);


   return  dp[ind][amount] =  min(take, nottake);


}
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();

        vector<vector<int>>dp(n, vector<int>(amount+1 ,-1));
       int ans1 = ans(0 , coins, amount, dp);
       if(ans1 == 1e9) return -1;
       return ans1; 
    }
};