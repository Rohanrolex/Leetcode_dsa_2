class Solution {
public:


 bool result(int index , vector<int>& arr, int sum,  vector<vector<int>>& dp){
      if(sum == 0) return true;
      if(index == 0) return arr[0] == sum;
      
      if(dp[index][sum] != -1) return dp[index][sum];
      bool nottake = result(index-1 , arr, sum, dp);
      
      bool take = false;
      if(sum >= arr[index]) take = result(index-1 , arr, sum - arr[index], dp);
      
      return  dp[index][sum] =  take || nottake;
      
  }

    bool canPartition(vector<int>& arr) {
         int n = arr.size();
        
        int totalsum = accumulate(arr.begin(), arr.end(),0);

        if(totalsum %2 != 0) return false;
         int target = totalsum/2;
         vector<vector<int>>dp(n ,vector<int>(target+1,-1));
        return result(n-1 , arr, target , dp);
    }
};