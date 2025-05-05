const int MOD = 1e9 + 7;
class Solution {
public:
    int numTilings(int n) {
        if (n == 0 || n == 1 || n == 2) return n;
        vector<long long> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; ++i) {
            dp[i] = (2 * dp[i - 1] % MOD + dp[i - 3] % MOD) % MOD;
        }
        return dp[n];
    }
};