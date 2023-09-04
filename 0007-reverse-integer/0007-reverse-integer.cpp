class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        int a=x;
        while(a)
        {
            long long temp=a%10;
            a=a/10;
            ans=ans*10+temp;
        }
        if(ans>INT_MAX||ans<INT_MIN) return 0;
        
        return int(ans);
    }
};