class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;

        int count =0;
        mpp[0] =1;
       int  prefixsum =0;

        for(int i =0 ;i<nums.size();i++){
             prefixsum += nums[i];
             int remove  = prefixsum -k;

             count += mpp[remove];

             mpp[prefixsum] +=1;
        }
        return count;
    }
};