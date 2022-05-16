#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;

    int A[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    vector<bool> flag(W + 1, false);

    for (int i = 0; i < N; ++i)
    {
        int w = A[i];
        if (w <= W)
        {
            flag[w] = true;
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            int w = A[i] + A[j];
            if (w <= W)
            {
                flag[w] = true;
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            for (int k = j + 1; k < N; ++k)
            {
                int w = A[i] + A[j] + A[k];
                if (w <= W)
                {
                    flag[w] = true;
                }
            }
        }
    }

    int ans = 0;
    for (int i = 0; i <= W; ++i)
    {
        if (flag[i])
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
