class Solution {
public:


long func(int index,int buy,  int n ,  vector<vector<long>>&dp, vector<int>& prices){
    if(index == n) return 0; 

    long profit =0;

    if(dp[index][buy] != -1) return dp[index][buy];

//if buy a stock
    if(buy){

        profit = max(-prices[index]+func(index+1 , 0,n,dp,prices) , 
                     0+ func(index+1, 1, n,dp,prices));

    }
    //sell a stock
    else{
    profit = max(prices[index] + func(index+1, 1,n,dp,prices),
                 0 + func(index+1, 0, n, dp , prices));

    }

    return dp[index][buy] = profit;

}
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
         vector<vector<long>>dp(n, vector<long>(2,-1));

         return func(0 , 1,n, dp , prices);

    }
};