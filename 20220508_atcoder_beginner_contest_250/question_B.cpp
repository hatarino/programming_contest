#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    string row1 = "";
    for (int i = 0; i < N; ++i)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < B; ++j)
            {
                row1 += '.';
            }
        }
        else
        {
            for (int j = 0; j < B; ++j)
            {
                row1 += '#';
            }
        }
    }

    string row2 = "";
    for (int i = 0; i < N; ++i)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < B; ++j)
            {
                row2 += '#';
            }
        }
        else
        {
            for (int j = 0; j < B; ++j)
            {
                row2 += '.';
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < A; ++j)
            {
                cout << row1 << endl;
            }
        }
        else
        {
            for (int j = 0; j < A; ++j)
            {
                cout << row2 << endl;
            }
        }
    }

    return 0;
}
