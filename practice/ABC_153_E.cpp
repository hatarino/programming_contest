#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/abc153/tasks/abc153_e

int main()
{
    int H, N;
    cin >> H >> N;
    int A[N], B[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i] >> B[i];
    }

    // 1e8 = 10^8.
    vector<vector<int>> dp(N + 1, vector<int>(H + 10001, 1e8));
    dp[0][0] = 0;
    int ans = 1e8;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= H + 10000; ++j)
        {
            dp[i + 1][j] = dp[i][j];
            if (j >= A[i])
            {
                dp[i + 1][j] = min(dp[i + 1][j], dp[i + 1][j - A[i]] + B[i]);
            }

            if (j >= H)
            {
                ans = min(ans, dp[i + 1][j]);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
