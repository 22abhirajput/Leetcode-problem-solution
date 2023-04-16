class Solution {
public:
    int dp[1001][1001] = {};
int dfs(vector<vector<int>> &cnt, string &t, int i, int j) {
    if (j >= t.size())
        return 1;
    if (dp[i][j] == 0) {
        dp[i][j] = 1;
        for (int k = i; k + (t.size() - j) <= cnt.size(); ++k)
            if (cnt[k][t[j] - 'a'])
                dp[i][j]  = ((long)cnt[k][t[j] - 'a'] * dfs(cnt, t, k + 1, j + 1) + dp[i][j]) % 1000000007;
    }
    return dp[i][j] - 1;
}
int numWays(vector<string>& words, string target) {
    vector<vector<int>> cnt(words[0].size(), vector<int>(26));
    for (auto &w : words)
        for (auto i = 0; i < w.size(); ++i)
            ++cnt[i][w[i] - 'a'];
    return dfs(cnt, target, 0, 0);
}
};