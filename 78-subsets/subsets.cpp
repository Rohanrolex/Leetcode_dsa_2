class Solution {
    public:
vector<vector<int>>ans;
 void cal(int ind, vector<int>& nums, vector<int>& temp){
    

    if(ind == nums.size()){
       ans.push_back(temp);
       return;
    } 

    cal(ind+1, nums,temp);

    temp.push_back(nums[ind]);
    cal(ind+1, nums,temp);
    temp.pop_back();


 }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        cal(0 , nums, temp);
        return ans;
    }
};
