class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curunt=0,maximum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            curunt+=nums[i];
            maximum=max(curunt,maximum);
            
            if(curunt<0)
            {
                curunt=0;
            }
        }
        return maximum;
    }
};
