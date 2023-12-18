class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int a=0,b=0;
        int c=INT_MAX,d=INT_MAX;
        for(auto n:nums)
        {
            if(n<c)
            {
                d=c;
                c=n;
            }else if(n<d)
            {
                d=n;
            }
            
            if(n>a)
            {
                b=a;
                a=n;
            }else if(n>b){
                b=n;
            }
        }
        return (a*b)-(c*d);
    }
};