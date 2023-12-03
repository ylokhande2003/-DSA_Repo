class Solution {
public:
    bool isMatch(string s, string p) {
         int n = s.length(), m = p.length();
        bool towd[n+1][m+1];
        memset(towd, false, sizeof(towd));
        towd[0][0] = true;
        
        for(int i=0; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(p[j-1] == '*'){
                    towd[i][j] = towd[i][j-2] || (i > 0 && (s[i-1] == p[j-2] || p[j-2] == '.') && towd[i-1][j]);
                }
                else{
                    towd[i][j] = i > 0 && towd[i-1][j-1] && (s[i-1] == p[j-1] || p[j-1] == '.');
                }
            }
        }
        
        return towd[n][m];
    }
};