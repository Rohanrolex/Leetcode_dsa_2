class Solution {
public:
int MOD =1e9+7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
         for(auto it : queries){
            int l = it[0];
            int r = it[1];
            int k = it[2];
            int v = it[3];


            while(l <= r){
                nums[l] = (1ll*nums[l]*v) % MOD;
                l+=k;
            }
         }
         int result =0;

         for(auto it : nums){
             result ^= it;
         }
         return result;
    }
};