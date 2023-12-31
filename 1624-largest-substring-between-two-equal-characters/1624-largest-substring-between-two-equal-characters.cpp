class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        for (int i=s.length()-1; i>0;i--){
            for (int j=0; j+i<s.length(); j++){
                if (s[j] == s[j+i]) return i-1;
            }
        }
        return -1;
    }
};