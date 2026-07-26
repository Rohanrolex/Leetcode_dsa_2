class Solution {
public:
int func(vector<int>& nums , int mid){
    int div = 0;
    for(int i =0 ;i<nums.size() ;i++){
        int p = ceil((double)nums[i]/mid);
        div+=p;
    }
return div;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
       int high = *max_element(nums.begin(), nums.end());
        int ans = INT_MAX;
        while(low<=high){
            int mid  = (low+high)/2;
            int divval = func(nums, mid);
            if(divval <= threshold){
                ans = min(ans , mid);
                high  = mid-1;
            }
            
            else{
               low = mid+1;
            }
        }
        return ans;
    }
};