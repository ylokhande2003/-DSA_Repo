class Solution {
public:
    int integerBreak(int n) {
        if(n<=3)
        {
            return n-1;
        } 
        
        int k=n/3;
        int r=n%3;
        if(r==0) return (int)pow(3,k);
        else if(r==1) return (int)pow(3,k-1)*4;
        else return (int)pow(3,k)*2;
     return 0;
    }
};