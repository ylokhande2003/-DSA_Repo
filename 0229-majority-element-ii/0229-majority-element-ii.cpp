class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int a=nums.size()/3;
        vector<int> ans;
        for(auto m:mp)
        {
            if(m.second>a)
            {
                ans.push_back(m.first);
            }
        }
        return ans;
    }
};