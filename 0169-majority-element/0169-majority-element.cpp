class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            ans[nums[i]]++;
        }
        for(auto a:ans)
        {
            if(a.second>(n/2))
            {
                return a.first;
            }
        }
        return -1;
    }
};