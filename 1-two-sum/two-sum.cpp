class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>mpp;
        int n = nums.size();
        

for(int i =0 ;i<n ;i++){
    int c = nums[i];
    int remaining  = target - c;
    if(mpp.find(remaining) != mpp.end()){

        return{mpp[remaining], i};
    }
    mpp[c]=i;
}
     return {-1,-1};    
    }
};