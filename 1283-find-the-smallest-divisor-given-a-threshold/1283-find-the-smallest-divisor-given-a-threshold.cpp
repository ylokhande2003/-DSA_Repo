class Solution {
public:
      int SumOfDivisor(vector<int>& nums, int Day){
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum += ceil((double)nums[i]/(double)(Day));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
         int maxi = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
        }
        int low = 1,high = maxi,ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(SumOfDivisor(nums,mid) <= threshold){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};