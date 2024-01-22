class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int dup=-1,miss=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==miss)
            {
                miss++;
            }
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                dup=nums[i];
            }
        }
        
        
        return {dup,miss};
    }
};