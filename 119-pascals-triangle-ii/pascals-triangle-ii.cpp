class Solution {
public:
vector<int>rowprint(int row){
    long long  ans =1;

    vector<int>temp;

    temp.push_back(1);

    for(int col = 1 ; col <=row ;col++){
       ans = ans * (row-col+1) / col;

        temp.push_back(ans);
    }
    

    return temp;
             
}
    vector<int> getRow(int rowIndex) {
        return rowprint(rowIndex);
    }
};