class Solution {
public:
int ans(int index ,vector<int>& coins, int amount, vector<vector<int>>& dp){
 int n = coins.size();

 if(amount == 0) return 1;
 if(index == n){
    
    return 0;
 }

 if(dp[index][amount] != -1){
    return dp[index][amount];
 }

int take =0;
 if(coins[index] <= amount){
     take =  ans(index, coins , amount-coins[index], dp);
 }

 int nottake = ans(index+1 , coins , amount, dp);


 return dp[index][amount] =  take + nottake;
}


    int change(int amount, vector<int>& coins) {
         vector<vector<int>>dp(coins.size(), vector<int>(amount+1 , -1));

     int ans1 = ans(0,coins , amount , dp);
    //  if(ans1 == 1e9) return 0;
     
     return ans1;
    }
};