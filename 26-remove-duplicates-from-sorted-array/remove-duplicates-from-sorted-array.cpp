#include<vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

    int insert = 1;
    for(int i =1 ;i<nums.size();i++){
        if(nums[i-1] != nums[i]){
            nums[insert] = nums[i];
            insert++;
        }
    }

    return insert;
    }
};