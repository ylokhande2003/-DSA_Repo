class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> output;
        for(int i=0;i<l.size();i++)
        {
            int high=r[i];
            int low=l[i];
            
            vector<int> temp(nums.begin()+low,nums.begin()+high+1);
            sort(temp.begin(),temp.end());
            int diff=temp[1]-temp[0];
            bool ans=true;
            for(int i=2;i<temp.size();i++)
            {
                if(diff!=temp[i]-temp[i-1]) ans=false;
            }
            output.push_back(ans);
        }
        return output;
    }
};