class Solution {
public:
    int majorityElement(vector<int>& nums) {
           int n = nums.size()/2;
           unordered_map<int,int>mpp;

           for(auto it : nums){
             mpp[it]++;   //add frequency
           }

           for(auto it : mpp){
             if(it.second > n){
                return it.first;
             }
           }
           return -1;
    }
};