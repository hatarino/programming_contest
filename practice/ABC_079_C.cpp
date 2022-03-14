#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/abc079/tasks/abc079_c

int main()
{
    string ABCD;
    cin >> ABCD;

    int N = ABCD.size();
    int ans = 0;
    char opList[3];

    for (int bit = 0; bit < (1 << N - 1); ++bit)
    {
        ans = ABCD[0] - '0';
        for (int i = 0; i < N - 1; ++i)
        {
            if (bit & (1 << i))
            {
                ans += ABCD[i + 1] - '0';
                opList[i] = '+';
            }
            else
            {
                ans -= ABCD[i + 1] - '0';
                opList[i] = '-';
            }
        }
        if (ans == 7)
        {
            for (int i = 0; i < N - 1; ++i)
            {
                cout << ABCD[i] << opList[i];
            }
            cout << ABCD.back() << "=7" << endl;
            break;
        }
    }

    return 0;
}
