class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;

        for(int i = 0; i < n; i++){
            int min_idx = 0;

            // find min in row
            for(int j = 1; j < m; j++){
                if(matrix[i][j] < matrix[i][min_idx]){
                    min_idx = j;
                }
            }

            // find max in that column
            int max_idx = 0;
            for(int k = 1; k < n; k++){
                if(matrix[k][min_idx] > matrix[max_idx][min_idx]){
                    max_idx = k;
                }
            }

            // check condition
            if(i == max_idx){
                ans.push_back(matrix[max_idx][min_idx]);
            }
        }

        return ans;
    }
};