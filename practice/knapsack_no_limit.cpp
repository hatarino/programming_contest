#include <bits/stdc++.h>
using namespace std;

// SEE: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_C&lang=jp

int main()
{
    int N, W;
    cin >> N >> W;
    int v[N], w[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> v[i] >> w[i];
    }
    int dp[N + 1][W + 1];

    for (int i = 0; i <= W; ++i)
    {
        dp[0][i] = 0;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= W; ++j)
        {
            if (j < w[i])
            {
                dp[i + 1][j] = dp[i][j];
            }
            else
            {
                dp[i + 1][j] = max(dp[i][j], dp[i + 1][j - w[i]] + v[i]);
            }
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}
