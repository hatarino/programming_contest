#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/abc076/tasks/abc076_c

int main()
{
    string S, T;
    cin >> S >> T;

    for (int i = S.length() - 1; i >= 0; --i)
    {
        string tmp = S;
        int k = i;
        for (int j = T.length() - 1; j >= 0; --j)
        {
            if (j > k)
            {
                break;
            }
            else if (T[j] == tmp[k] || tmp[k] == '?')
            {
                tmp[k] = T[j];
                --k;
            }
            else
            {
                break;
            }

            if (j == 0)
            {
                replace(tmp.begin(), tmp.end(), '?', 'a');
                cout << tmp << endl;
                return 0;
            }
        }
    }

    cout << "UNRESTORABLE" << endl;

    return 0;
}
