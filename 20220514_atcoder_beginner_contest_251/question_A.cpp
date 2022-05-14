#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int num = S.size();

    if (num == 3)
    {
        cout << S << S << endl;
        return 0;
    }
    else if (num == 2)
    {
        cout << S << S << S << endl;
        return 0;
    }
    else
    {
        cout << S << S << S << S << S << S << endl;
        return 0;
    }

    return 0;
}
