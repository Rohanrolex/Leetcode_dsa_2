class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
       int n = nums.size();
int maxXor= INT_MIN;
       for(int i =0 ;i<n ;i++){
         for(int j =i ; j<n ;j++){
            if(abs((nums[i] - nums[j])) <= min(nums[i], nums[j])){
                maxXor = max(maxXor , nums[i] ^ nums[j]);
            }
         }
       }   
       return maxXor;
    }
};