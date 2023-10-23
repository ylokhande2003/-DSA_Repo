class Solution {
public:
    int myAtoi(string s) {
       int n=0,p=0,i=0;
            double ans=0;
        while(s[i]==' ')
        {
            i++;
        }
        if(s[i]=='-')
        {
            i++;
            n++;
        }
        if(s[i]=='+')
        {
            i++;
            p++;
        }
       
        while(i<s.size()&& s[i]>='0'&&s[i]<='9')
        {
            ans=ans*10+(s[i]-48);
            i++;
        }
          if(p>0) ans=ans;
        if(n>0) ans=-ans;
        if(p>0&& n>0) return 0;
        
        if(ans<INT_MIN)
        {
            return INT_MIN;
        }else if(ans>INT_MAX)
        {
            return INT_MAX;
        }
        return (int)ans;
    }
};