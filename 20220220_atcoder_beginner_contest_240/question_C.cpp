#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int a[N], b[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
        cin >> b[i];
    }
    bool dp[N + 1][X + 1];

    memset(dp, 0, sizeof(dp));
    dp[0][0] = true;

    for (int i = 0; i < N; ++i)
    {
        for (int x = 0; x <= X; ++x)
        {
            if (a[i] <= x)
            {
                dp[i + 1][x] = dp[i + 1][x] | dp[i][x - a[i]];
            }
            if (b[i] <= x)
            {
                dp[i + 1][x] = dp[i + 1][x] | dp[i][x - b[i]];
            }
            if (a[i] > x && b[i] > x)
            {
                dp[i + 1][x] = false;
            }
        }
    }

    if (dp[N][X])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
