class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        int ans=n;
        while(ans>=0)
        {
            ans=ans-i;
            if(ans<0)
            {
                return i-1;
            }
            i++;
        }
        return 1;
    }
};