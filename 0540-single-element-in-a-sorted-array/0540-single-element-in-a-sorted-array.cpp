class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int i=0;
       int j=i+1;
       if(nums.size()<=1) return nums[i];
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]!=nums[i+1])
           {
               return nums[i];
           }
           i++;
       }
       return -1;
    }
};