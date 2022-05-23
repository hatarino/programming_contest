#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string S[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> S[i];
    }

    int cnt[10][10];
    memset(cnt, 0, sizeof(cnt));

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            cnt[S[i][j] - '0'][j]++;
        }
    }

    int ans = INT_MAX;
    for (int i = 0; i < 10; ++i)
    {
        int tmp = 0;
        for (int j = 0; j < 10; ++j)
        {
            tmp = max(tmp, 10 * (cnt[i][j] - 1) + j);
        }
        ans = min(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}
