class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1 , 0);
        for(int i = 0 ;i<=n ;i++){
            if(i%2==0){
                ans[i] = ans[i/2];//it is for even number

            }
            else{
                ans[i] = ans[i/2]+1; // this is for odd number 
            }
        }
        return ans;
    }
};