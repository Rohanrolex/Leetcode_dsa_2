class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
int maxwater = 0;
        while(i<j){

            int waterarea = min(height[i] , height[j]) * (j -i);
            maxwater = max(maxwater , waterarea);

            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }

        }
        return maxwater;
    }
};