#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    int X[3];
    int Y[3];
    for (int i = 0; i < 3; ++i)
    {
        cin >> X[i];
        cin >> Y[i];
    }

    if (X[0] == X[1])
    {
        x = X[2];
    }
    else if (X[0] == X[2])
    {
        x = X[1];
    }
    else
    {
        x = X[0];
    }

    if (Y[0] == Y[1])
    {
        y = Y[2];
    }
    else if (Y[0] == Y[2])
    {
        y = Y[1];
    }
    else
    {
        y = Y[0];
    }

    cout << x << " " << y << endl;

    return 0;
}
