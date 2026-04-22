class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size()/3;

        unordered_map<int,int>mpp;

        for(auto it : nums){
            mpp[it]++;
        }

        vector<int>ans;

        for(auto it : mpp){
            if(it.second > n){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};