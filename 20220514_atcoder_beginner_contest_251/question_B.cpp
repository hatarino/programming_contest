#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;

    int A[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 1000));
    dp[0][0] = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= W; ++j)
        {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            if (j - A[i] >= 0)
            {
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - A[i]] + 1);
            }
        }
    }

    int ans = 0;

    for (int i = 1; i <= W; ++i)
    {
        if (dp[N][i] <= 3)
        {
            ++ans;
        }
    }

    cout << ans << endl;

    return 0;
}
