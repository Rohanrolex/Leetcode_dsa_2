class Solution {
public:
    bool isPalindrome(string s) {
        string p = "";

      int n = s.size();


      for(int i =0 ;i<n ;i++){

           if(isalnum(s[i])){
              p+= toupper(s[i]);
           }
      }

      string q = p;

      reverse(p.begin(),p.end());


      return p == q;
    }
};