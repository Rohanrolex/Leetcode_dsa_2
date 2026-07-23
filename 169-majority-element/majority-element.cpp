class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
 int n = nums.size();
 int p = n/2;

        for(auto &it : nums){
               mpp[it]++;
        }


        for(auto it : mpp){
            
            if(it.second > p){
               return  it.first;
            }
        }
    return -1;
    }

    };