class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n=jobDifficulty.size();
        if(d>n)
        {
            return -1;
        }else if(d==n)
        {int sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=jobDifficulty[i];
            }
         return sum;
        }
        vector<int> dp(n);
        dp[0] = jobDifficulty[0];
        for (int i = 1; i < n; ++i) {
            dp[i] = max(jobDifficulty[i], dp[i - 1]);
        }

        vector<int> dpPrev(n);
        for (int i = 1; i < d; ++i) {
            dp.swap(dpPrev);
            for (int j = i; j < n; ++j) {
                int lastDayDifficulty = jobDifficulty[j];
                int tmpMin = lastDayDifficulty + dpPrev[j - 1];

                for (int t = j - 1; i - 1 < t; --t) {
                    lastDayDifficulty = max(lastDayDifficulty, jobDifficulty[t]);
                    tmpMin = min(tmpMin, lastDayDifficulty + dpPrev[t - 1]);
                }

                dp[j] = tmpMin;
            }
        }

        return dp.back();
        
    }
};