#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/abc104/tasks/abc104_c

int main()
{
    int D;
    cin >> D;
    int G;
    cin >> G;
    int p[D];
    int c[D];
    int answer = INT_MAX;

    for (int i = 0; i < D; i++)
    {
        cin >> p[i];
        cin >> c[i];
    }

    for (int bit = 0; bit < (1 << D); ++bit)
    {
        int num = 0;
        int point = 0;
        for (int i = 0; i < D; ++i)
        {
            if (bit & (1 << i))
            {
                point += c[i] + p[i] * (i + 1) * 100;
                num += p[i];
            }
        }
        if (point >= G)
        {
            answer = min(answer, num);
        }
        else
        {
            for (int i = D - 1; i >= 0; --i)
            {
                if (bit & (1 << i))
                {
                    continue;
                }
                for (int j = 0; j < p[i]; ++j)
                {
                    if (point >= G)
                    {
                        break;
                    }
                    point += (i + 1) * 100;
                    ++num;
                }
            }
            answer = min(answer, num);
        }
    }
    cout << answer << endl;

    return 0;
}
