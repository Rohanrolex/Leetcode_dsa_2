class Solution {
public:
int countsum(int digit){
    
   int sum =0;
   while(digit > 0){
     sum+= digit%10;
     digit /= 10;
   }
   return sum;
}
    int minElement(vector<int>& nums) {
       int n = nums.size();

      
       for(int i =0 ;i<n ;i++){
         int digit = nums[i];
         int sum = countsum(digit);
          nums[i] = sum;
       } 
       int mini = INT_MAX;
       for(int i =0 ;i<n ;i++){
         if(nums[i] < mini){
            mini = nums[i];
         }
       }
       return mini;
    }
};