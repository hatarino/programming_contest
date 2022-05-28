#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    string S[H];
    for (int i = 0; i < H; ++i)
    {
        cin >> S[i];
    }

    int h = -1;
    int w = -1;
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            if (S[i][j] == 'o')
            {
                if (h >= 0 && w >= 0)
                {
                    h = abs(h - i);
                    w = abs(w - j);
                }
                else
                {
                    h = i;
                    w = j;
                }
            }
        }
    }

    cout << h + w << endl;

    return 0;
}
