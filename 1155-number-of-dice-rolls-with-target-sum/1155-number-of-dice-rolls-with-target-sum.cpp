class Solution {
    private:
    const int MOD = 1e9 + 7;

public:
    int numRollsToTarget(int n, int k, int target) {
        vector<int> dp0(target + 1, 0), dp1(target + 1, 0);
        dp0[0] = 1;
        for (int i = 0; i < n; i++) {
            fill(dp1.begin(), dp1.end(), 0);
            for (int t = 1; t <= target; t++) {
                for (int d = 1; d <= k; d++) {
                    if ((t - d) < 0) continue;
                    dp1[t] = (dp1[t] + dp0[t - d]) % MOD;
                }
            }
            swap(dp0, dp1);
        }
        return dp0[target];
    }
};