#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/arc031/tasks/arc031_2

char A[10][10];
char ACopy[10][10];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y)
{
    ACopy[x][y] = 'x';
    for (int i = 0; i < 4; ++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (0 <= nx && nx < 10 && 0 <= ny && ny < 10 && ACopy[nx][ny] == 'o')
        {
            dfs(nx, ny);
        }
    }

    return;
}

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            cin >> A[j][i];
            ACopy[j][i] = A[j][i];
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            if (ACopy[j][i] == 'x')
            {
                dfs(j, i);
            }

            bool answer = true;
            for (int k = 0; k < 10; ++k)
            {
                for (int l = 0; l < 10; ++l)
                {
                    if (ACopy[k][l] == 'o')
                    {
                        answer = false;
                    }
                }
            }

            if (answer)
            {
                cout << "YES" << endl;
                return 0;
            }

            for (int m = 0; m < 10; ++m)
            {
                for (int n = 0; n < 10; ++n)
                {
                    ACopy[m][n] = A[m][n];
                }
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}
