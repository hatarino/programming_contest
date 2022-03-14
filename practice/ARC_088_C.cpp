#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/abc083/tasks/arc088_a

int main()
{
    // Define X, Y on long long because MAX_X_Y = 10^18.
    // Use long long when max input value is over about 10^9.
    long long X, Y;
    cin >> X >> Y;
    int ans = 0;
    while (X <= Y)
    {
        ans++;
        X *= 2;
    }
    cout << ans << endl;

    return 0;
}
