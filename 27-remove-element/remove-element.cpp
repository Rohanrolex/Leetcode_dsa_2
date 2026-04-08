class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;

        for(auto it : nums){
            if(it != val){
                ans.push_back(it);
            }
        }
        nums = ans;
        return nums.size();   
    }
};