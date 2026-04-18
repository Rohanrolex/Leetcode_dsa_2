class Solution {
public:
int reversenum(int n){
    int num1 =0;
    while(n >0){
        num1 = num1* 10 + n%10;
        n /=10;
    }
    return num1;

}
    int mirrorDistance(int n) {
           int p = reversenum(n);
           int ans= abs(n-p);
           return ans;
    }
};