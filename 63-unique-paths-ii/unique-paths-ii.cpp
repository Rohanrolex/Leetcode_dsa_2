class Solution {
public:

int path(int row , int col , int m, int n , vector<vector<int>>& obstacleGrid , vector<vector<int>> &dp){
      if(row >= m || col >= n) return 0;
      if(obstacleGrid[m-1][n-1] == 1) return 0;
      int paths =0;

      if(row == m-1 && col == n-1) return 1; //one path found 

      if(dp[row][col] != -1) return dp[row][col];

      if(obstacleGrid[row][col] != 1){
          


     int right = path(row , col+1 , m,n, obstacleGrid, dp);
      int buttom = path(row+1 , col , m, n, obstacleGrid ,dp);

      paths = right + buttom;
      }

      

      return dp[row][col] =  paths; 
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

    vector<vector<int>>dp(m , vector<int>(n,-1));
        return path(0,0 , m,n, obstacleGrid, dp);

    }
};