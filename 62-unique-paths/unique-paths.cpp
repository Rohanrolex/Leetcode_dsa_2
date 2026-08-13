class Solution {
public:

int countpath(int row , int col  ,  int m ,int n,  vector<vector<int>> & dp){

    if(col >= n || row >= m) return 0;
    int path =0;
    
    if(row == m-1 && col == n-1){
         return 1;
    }

    if(dp[row][col] != -1) return dp[row][col];

    int right =  countpath(row , col+1 ,m,n , dp);
    int down =  countpath(row+1 , col,m,n ,dp);

    path = right +down;

    return  dp[row][col] = path;

}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m ,vector<int>(n, -1));
        return  countpath(0 ,0,m, n , dp);
    }
};