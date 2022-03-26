#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (A <= C && B <= D)
    {
        cout << "Takahashi";
        return 0;
    }
    else if (A < C)
    {
        cout << "Takahashi";
        return 0;
    }
    cout << "Aoki";

    return 0;
}
