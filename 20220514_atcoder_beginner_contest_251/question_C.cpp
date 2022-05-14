#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    map<string, int> m{};

    int ans = 0;
    int maxT = 0;
    for (int i = 0; i < N; ++i)
    {
        string S;
        cin >> S;
        int T;
        cin >> T;

        if (m.count(S) == 0)
        {
            m[S] = T;
            if (T > maxT)
            {
                maxT = T;
                ans = i + 1;
            }
        }
        else
        {
            continue;
        }
    }

    cout << ans << endl;

    return 0;
}
