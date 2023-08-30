class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k=nums.size();
        if(nums[k-1]<target)
        {
            return k;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }else if(nums[i]>target)
            {
                return i;
            }
        }
        return 0;
    }
};