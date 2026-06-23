class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        while (x != 0) {
            int digit = x % 10;  // Extract the last digit

            // Check for overflow/underflow before updating `ans`
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) 
                return 0;  // Overflow for positive numbers
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) 
                return 0;  // Underflow for negative numbers

            ans = ans * 10 + digit;  // Build the reversed number
            x /= 10;  // Remove the last digit
        }

        return ans;
    }
};