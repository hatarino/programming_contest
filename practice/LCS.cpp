#include <bits/stdc++.h>
using namespace std;

// SEE: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C&lang=jp

int main()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    int dp[n + 1][m + 1];

    for (int i = 0; i <= n; ++i)
    {
        dp[i][0] = 0;
    }
    for (int j = 0; j <= m; ++j)
    {
        dp[0][j] = 0;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (s[i] == t[j])
            {
                dp[i + 1][j + 1] = dp[i][j] + 1;
            }
            else
            {
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}
