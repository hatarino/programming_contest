#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;

    int t = 0;
    int a = 0;

    int nt = X / (A + C);
    t = nt * A * B;
    if (X - (A + C) * nt >= A)
    {
        t += A * B;
    }
    else
    {
        t += (X - (A + C) * nt) * B;
    }

    int na = X / (D + F);
    a = na * D * E;
    if (X - (D + F) * na >= D)
    {
        a += D * E;
    }
    else
    {
        a += (X - (D + F) * na) * E;
    }

    if (t == a)
    {
        cout << "Draw" << endl;
    }
    else if (t > a)
    {
        cout << "Takahashi" << endl;
    }
    else
    {
        cout << "Aoki" << endl;
    }

    return 0;
}
