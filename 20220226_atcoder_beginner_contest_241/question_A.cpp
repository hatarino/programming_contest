#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    int k = 0;
    for (int i = 0; i < 10; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 3; ++i)
    {
        k = a[k];
    }

    cout << k << endl;

    return 0;
}
