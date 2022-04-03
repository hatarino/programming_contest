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
    bool ans = false;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i + 5 < N)
            {
                int cnt = 0;
                for (int k = 0; k < 6; ++k)
                {
                    if (S[i + k][j] == '#')
                    {
                        ++cnt;
                    }
                }
                if (cnt >= 4)
                    ans = true;
            }
            if (j + 5 < N)
            {
                int cnt = 0;
                for (int k = 0; k < 6; ++k)
                {
                    if (S[i][j + k] == '#')
                    {
                        ++cnt;
                    }
                }
                if (cnt >= 4)
                    ans = true;
            }
            if (i + 5 < N && j + 5 < N)
            {
                int cnt = 0;
                for (int k = 0; k < 6; ++k)
                {
                    if (S[i + k][j + k] == '#')
                    {
                        ++cnt;
                    }
                }
                if (cnt >= 4)
                    ans = true;
            }
            if (i - 5 >= 0 && j + 5 < N)
            {
                int cnt = 0;
                for (int k = 0; k < 6; ++k)
                {
                    if (S[i - k][j + k] == '#')
                    {
                        ++cnt;
                    }
                }
                if (cnt >= 4)
                    ans = true;
            }
        }
    }

    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
