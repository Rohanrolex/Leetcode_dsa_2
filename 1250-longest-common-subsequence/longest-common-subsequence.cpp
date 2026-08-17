class Solution {
public:
int func(int i , int j  , string &s, string &d,  vector<vector<int>>& dp){
    if(i <0 || j<0) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    if(s[i] == d[j]) return dp[i][j] = 1 + func(i-1 , j-1 , s,d,dp); //the char match 

    //if not match 


    return dp[i][j] = max(func(i-1,j,s,d,dp), func(i, j-1 , s,d,dp));
}
    int longestCommonSubsequence(string s, string d) {
       int n = s.size();
       int m = d.size();
 vector<vector<int>>dp(n, vector<int>(m,-1));
       return func(n-1 , m-1, s,d, dp);

    }
};