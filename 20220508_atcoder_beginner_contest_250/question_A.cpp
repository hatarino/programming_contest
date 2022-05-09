#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W, R, C;
    cin >> H >> W >> R >> C;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int ans = 0;

    for (int i = 0; i < 4; ++i)
    {
        int nx = R + dx[i];
        int ny = C + dy[i];
        if (1 <= nx && nx <= H && 1 <= ny && ny <= W)
        {
            ++ans;
        }
    }

    cout << ans << endl;

    return 0;
}
