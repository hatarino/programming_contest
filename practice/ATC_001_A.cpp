#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/atc001/tasks/dfs_a

int H;
int W;
const int MAX_H = 500;
const int MAX_W = 500;
char field[MAX_W][MAX_H];
bool isReached[MAX_W][MAX_H];

void dfs(int x, int y)
{
    if (x < 0 || x >= W || y < 0 || y >= H)
    {
        return;
    }
    if (field[x][y] == '#')
    {
        return;
    }
    if (isReached[x][y])
    {
        return;
    }

    isReached[x][y] = true;

    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);

    return;
}

int main()
{
    cin >> H;
    cin >> W;

    int sx, sy;
    int gx, gy;

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            cin >> field[j][i];
            if (field[j][i] == 's')
            {
                sx = j;
                sy = i;
            }
            if (field[j][i] == 'g')
            {
                gx = j;
                gy = i;
            }
        }
    }

    dfs(sx, sy);

    if (isReached[gx][gy])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
