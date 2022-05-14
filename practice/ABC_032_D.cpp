#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/abc032/tasks/abc032_d

int main()
{
    // A case that v[i] value is small and w[i] value is large.

    int MAX_N_V = 200000;

    int N, W;
    cin >> N >> W;

    int v[N], w[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> v[i] >> w[i];
    }

    // Use vector.
    // SEE: http://tamori.3zoku.com/linux/stack/stack.html
    // Type of vector is long long but construct with INT_MAX because constructiong with LLONG_MAX may cause overflow.
    vector<vector<long long>> dp(N + 1, vector<long long>(MAX_N_V + 1, INT_MAX));
    dp[0][0] = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= MAX_N_V; ++j)
        {
            if (j < v[i])
            {
                dp[i + 1][j] = dp[i][j];
            }
            else
            {
                dp[i + 1][j] = min(dp[i][j], dp[i][j - v[i]] + w[i]);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i <= MAX_N_V; ++i)
    {
        if (dp[N][i] <= W)
        {
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}
