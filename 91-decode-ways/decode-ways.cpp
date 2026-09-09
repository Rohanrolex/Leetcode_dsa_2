class Solution {
public:

int cal(int ind , string & s, vector<int> & dp){

    if(ind == s.size()) return 1; //so we decode this 

    if(s[ind] == '0') return 0 ; //we doesnt decode this 
    if(dp[ind] != -1) return dp[ind];

    int onedigit = cal(ind+1 , s,dp);

    int twodigit = 0;

    if(ind+1 < s.size()){

        int num = (s[ind]-'0')*10 + (s[ind+1] - '0');
        if(num>=10 && num <=26){
            twodigit = cal(ind+2 , s,dp);
        }
    }

    return   dp[ind] = onedigit + twodigit;
}
    int numDecodings(string s) {
        int n = s.size();
        vector<int>dp(n,-1);
         return  cal(0 , s, dp);
    }
};