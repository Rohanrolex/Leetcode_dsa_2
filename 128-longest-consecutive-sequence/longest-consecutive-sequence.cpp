class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
        unordered_set<int>st(nums.begin(), nums.end());

        int maxlen= 0;

        for(auto it : st){

            if(st.find(it-1) == st.end()){  //if prev ele not present 
                
                int curr = it;
                int count = 1;

                while(st.find(curr+1) != st.end()){
                    count++;
                    curr++;
                }

maxlen = max(maxlen , count);
            }
            
        }
        return maxlen;
    }
};