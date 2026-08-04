class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
         set<int>mpp;
         int n = nums.size();
         for(int i =0 ;i<n ;i++){
            mpp.insert(nums[i]);
         }

         int maxele = *max_element(nums.begin(), nums.end());
         int minele = *min_element(nums.begin(), nums.end());
vector<int>ans;
         for(int i =minele; i<=maxele;i++){
             if(mpp.find(i) == mpp.end()){
                ans.push_back(i);
             }
         }
return ans;

    }
};