class Solution {
public:
vector<vector<int>>ans;

void calculate(int ind ,  int currsum , vector<int>temp , vector<int>& candidates, int target){

if(ind == candidates.size() || currsum > target)return;

if(currsum == target){
    ans.push_back(temp);
    return;
}

    //skip
    calculate(ind+1, currsum , temp , candidates, target);

    //add
    temp.push_back(candidates[ind]);
    calculate(ind , currsum + candidates[ind], temp , candidates, target);

    temp.pop_back();
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int>temp;

       calculate(0 , 0 , temp ,candidates, target);
       return ans;
        
    }
};