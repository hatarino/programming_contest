#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/abc007/tasks/abc007_3

char maze[50][50];
int R, C;
int sy, sx;
int gy, gx;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int INF = 100000000;

typedef pair<int, int> P;

int bfs()
{
    queue<P> que;
    int d[C][R];
    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            d[j][i] = INF;
        }
    }

    que.push(P(sx, sy));
    d[sx][sy] = 0;

    while (que.size())
    {
        P p = que.front();
        que.pop();

        if (p.first == gx && p.second == gy)
        {
            break;
        }

        for (int i = 0; i < 4; ++i)
        {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if (nx >= 0 && nx < C && ny >= 0 && ny < R && d[nx][ny] == INF && maze[nx][ny] != '#')
            {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }

    return d[gx][gy];
}

int main()
{
    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;
    --sy;
    --sx;
    --gy;
    --gx;
    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            cin >> maze[j][i];
        }
    }
    int res = bfs();
    cout << res << endl;

    return 0;
}
