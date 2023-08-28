class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int f=1;
        // while(l<=r)
        // {
        //     int mid=l+r/2;
        //     if(nums[mid]==target)
        //     {
        //         return mid;
        //     }else if(nums[mid]>=target&&)
        // }
        for(int i=0;i<nums.size()/2;i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
         for(int i=nums.size()/2;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        return -1;
    }
}; 