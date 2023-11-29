class Solution {
public:
    void findSubset(int idx,vector<int>&nums,set<vector<int>>&st,vector<int>&ds){
        if(idx == nums.size()){
            st.insert(ds);
            return;
        }
        ds.push_back(nums[idx]);
        findSubset(idx+1,nums,st,ds);
        ds.pop_back();
        findSubset(idx+1,nums,st,ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        vector<int> ds;
        vector<vector<int>> temp;

        findSubset(0,nums,st,ds);

        for(auto &it : st){
            temp.push_back(it);
        }
        return temp;
    }
};