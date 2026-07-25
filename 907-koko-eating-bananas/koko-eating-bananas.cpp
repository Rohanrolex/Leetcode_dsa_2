class Solution {
public:
    int func(vector<int>& piles) {
        int ans = 0;
        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > ans) {
                ans = piles[i];
            }
        }
        return ans;
    }

    long long calculateHours(vector<int>& piles, int speed) {
        long long hours = 0;

        for (int i = 0; i < piles.size(); i++) {
            hours += ceil(double(piles[i]/ double(speed)));
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = func(piles);

        int low = 1;
        int high = maxi;
        int ans = INT_MAX;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (calculateHours(piles, mid) <= h) {
                ans = min(ans, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};