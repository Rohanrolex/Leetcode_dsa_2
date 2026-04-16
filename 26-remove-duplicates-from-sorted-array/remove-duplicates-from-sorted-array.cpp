#include<vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

       
        int insertIndex = 1; //because first ele always unique

        for(int i =1 ;i<nums.size() ;i++){
            if(nums[i-1] != nums[i]){
                nums[insertIndex] = nums[i]; //unique ele found
                insertIndex++;//increment the insert index
            }
        }
        return insertIndex;
    }
};