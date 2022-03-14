#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/keyence2020/tasks/keyence2020_b

int main()
{
    const int MAX_N = 100000;
    int X[MAX_N], L[MAX_N];
    // first: Xi+Li second: Xi-Li
    pair<int, int> XL[MAX_N];
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> X[i] >> L[i];
        XL[i].first = X[i] + L[i];
        XL[i].second = X[i] - L[i];
    }
    // Important element.
    sort(XL, XL + N);

    int pos = INT32_MIN;
    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        if (XL[i].second >= pos)
        {
            ++ans;
            pos = XL[i].first;
        }
    }

    cout << ans << endl;

    return 0;
}
