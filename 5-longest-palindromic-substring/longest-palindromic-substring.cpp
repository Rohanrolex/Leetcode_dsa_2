class Solution {
public:
    string longestPalindrome(string s) {
      int n = s.size();
      int start =0;
      int maxlen =1; //single ele always a palendrom  
      vector<vector<bool>>dp(n,vector<bool>(n,false));

      //for length 1
      for(int i=0;i<n ;i++){
        dp[i][i] = true;
      }

      //for length >=2

      for(int len = 2 ; len <= n ;len++){
         for(int i =0 ;i+len-1 <n ;i++){
             int j = i+ len-1;
             if(s[i] == s[j]){
                if(len == 2 || dp[i+1][j-1] == true){
                    dp[i][j] = true;
                    if(len > maxlen){
                        start =i;
                        maxlen = len;
                    }
                }
             }
         }
         
      }
      return s.substr(start , maxlen);
    }
};