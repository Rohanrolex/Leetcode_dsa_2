class Solution {
public:


void margesort(vector<int>& arr , int low , int  mid, int high){
  vector<int>temp;

  int left = low;
  int right = mid+1;

  while(left <= mid && right<=high){
     if(arr[left] <= arr[right]){
        temp.push_back(arr[left]);
        left++;
     }
     else{
     temp.push_back(arr[right]);
     right++;
     }
  }

  while(left <= mid){
     temp.push_back(arr[left]);
        left++;
  }

  while(right <= high){
     temp.push_back(arr[right]);
        right++;
  }


  for(int i = low ;i<=high ;i++){
     arr[i] = temp[i-low];
  }

       
}

void marge(vector<int>& nums , int low , int high){

    if(low == high) return; //means single ele comes

    int mid = (low+high)/2;

    marge(nums , low, mid);
    marge(nums , mid+1, high);

    margesort(nums, low, mid , high);
}

    vector<int> sortArray(vector<int>& nums) {
          int n = nums.size();

           marge(nums, 0 , n-1);
           return nums;
    }
};