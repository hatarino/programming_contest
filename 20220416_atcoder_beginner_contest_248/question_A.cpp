#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int num = S.size();
    int v[num];

    for (int i = 0; i < num; i++)
    {
        v[i] = S[i] - '0';
    }
    sort(v, v + num);

    int ans = 9;
    for (int i = 0; i < num; i++)
    {
        if (v[i] != i)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
