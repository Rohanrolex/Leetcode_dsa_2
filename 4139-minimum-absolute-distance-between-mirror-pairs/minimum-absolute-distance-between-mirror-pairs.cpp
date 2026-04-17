class Solution {
public:
    int reverseDigits(int n) {
        int revNum = 0;
        while (n > 0) {
            revNum = revNum * 10 + n % 10;
            n /= 10;
        }
        return revNum;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mpp; 
        int minval = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {

           
            if (mpp.count(nums[i])) {
                minval = min(minval, i - mpp[nums[i]]);
            }

          
            int rev = reverseDigits(nums[i]);
            mpp[rev] = i;
        }

        return (minval == INT_MAX) ? -1 : minval;
    }
};