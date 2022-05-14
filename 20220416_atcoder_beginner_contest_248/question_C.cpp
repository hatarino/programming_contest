#include <bits/stdc++.h>
#include <atcoder/modint>

using namespace std;
using namespace atcoder;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<modint998244353>> dp(N + 1, vector<modint998244353>(K + 1, modint998244353(0)));
    dp[0][0] = 1;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < K; ++j)
        {
            for (int k = 1; k <= M; ++k)
            {
                if (j + k <= K)
                {
                    dp[i + 1][j + k] += dp[i][j];
                }
            }
        }
    }

    modint998244353 ans = 0;

    for (int i = 0; i <= K; ++i)
    {
        ans += dp[N][i];
    }

    cout << ans.val() << endl;

    return 0;
}
