class Solution {
public:
int ans(int index ,vector<int>& coins, int amount, vector<vector<int>>& dp){
 int n = coins.size();
 int count =0;
 if(amount == 0) return 0;
 if(index == n){
    
    return 1e9;

 }

 if(dp[index][amount] != -1){
    return dp[index][amount];
 }

int take =1e9;
 if(coins[index] <= amount){
     take = 1+ ans(index, coins , amount-coins[index], dp);
 }

 int nottake = ans(index+1 , coins , amount, dp);

 count = min(take , nottake);

 return dp[index][amount] =  count;


}
    int coinChange(vector<int>& coins, int amount) {
         vector<vector<int>>dp(coins.size(), vector<int>(amount+1 , -1));

     int ans1 = ans(0,coins , amount , dp);
     if(ans1 == 1e9) return -1; //not possible
     return ans1;
    }
};
