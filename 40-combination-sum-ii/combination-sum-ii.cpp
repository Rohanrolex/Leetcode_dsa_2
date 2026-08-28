class Solution {
public:
set<vector<int>>st;

void cal(int ind , int currsum , vector<int>v , vector<int>& candidates, int target){

if(currsum == target){
     st.insert(v);
     return;
}

if(ind == candidates.size() || target < currsum) return;



    //skip 
  

  int next = ind + 1;

        while (next < candidates.size() &&
               candidates[next] == candidates[ind]) {
            next++;
        }

        cal(next, currsum, v, candidates, target);

    //add

    v.push_back(candidates[ind]);
    cal(ind+1 ,  currsum + candidates[ind], v, candidates , target);
    v.pop_back();
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>v;
        sort(candidates.begin(), candidates.end()); 
      cal(0 , 0 ,v,candidates,target); 

      vector<vector<int>> ans(st.begin(), st.end());
      return ans;  
      
    }
};