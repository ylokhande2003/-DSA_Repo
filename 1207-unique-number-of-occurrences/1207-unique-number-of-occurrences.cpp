class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto it:m)
        {
            for(auto it1:m)
            {
                if(it.first!=it1.first&&it.second==it1.second)
                {
                    return false;
                }
            }
        }
        return  true;
    }
};