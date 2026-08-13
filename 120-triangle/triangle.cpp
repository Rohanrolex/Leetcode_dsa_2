class Solution {
public:

    int solve(int row, int col,
              vector<vector<int>>& triangle,
              vector<vector<int>>& dp) {

        if (row == triangle.size() - 1)
            return triangle[row][col];

        if (dp[row][col] != INT_MAX)
            return dp[row][col];

        int down = solve(row + 1, col, triangle, dp);
        int diagonal = solve(row + 1, col + 1, triangle, dp);

        return dp[row][col] =
            triangle[row][col] + min(down, diagonal);
    }

    int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size();

        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

        return solve(0, 0, triangle, dp);
    }
};