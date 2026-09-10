class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int result = nums[0]+ nums[1]+nums[2];
        int mindiff = INT_MAX;
        sort(nums.begin(), nums.end());
        if(n < 3) return 0;

        for(int i =0 ;i<n-2;i++){
            int left = i+1;
            int right = n-1;

            while(left < right){
                int sum = nums[i] + nums[left]+ nums[right];
                if(sum == target) return target;
                else if(sum < target) left++;
                else right--;

                int difference = abs(sum - target);

                if(difference < mindiff){
                    mindiff = difference;
                    result = sum;

                }
            }
        }

        return result;
    }
};