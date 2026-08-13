class Solution {
public:
int minsum(int row , int col , int m , int n , vector<vector<int>>& grid, vector<vector<int>>& dp){
    if(row >= m || col >= n) return INT_MAX;
    

if(row == m-1 && col == n-1) return grid[m-1][n-1]; // so it reach 

if(dp[row][col] != -1) return dp[row][col];

    int right = minsum(row, col+1, m,n , grid , dp);
    int down = minsum(row+1, col , m ,n ,grid, dp);
    return dp[row][col] =  grid[row][col] + min(right , down);    

}
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
 vector<vector<int>>dp(m , vector<int>(n,-1));
        return minsum(0 ,0 , m ,n, grid, dp);
    }
};