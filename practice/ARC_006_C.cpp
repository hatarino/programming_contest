#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/arc006/tasks/arc006_3

int main()
{
    int N;
    cin >> N;
    int w[N];
    vector<int> v;
    for (int i = 0; i < N; ++i)
    {
        cin >> w[i];
        int k = 0;
        int diff = INT_MAX;
        bool b = false;
        int l = v.size();
        for (int j = 0; j < l; ++j)
        {
            if (v[j] - w[i] < 0)
            {
                continue;
            }
            else if (v[j] - w[i] <= diff)
            {
                diff = v[j] - w[i];
                k = j;
                b = true;
            }
        }
        if (!b)
        {
            v.push_back(w[i]);
        }
        else
        {
            v[k] = w[i];
        }
    }

    cout << v.size() << endl;

    return 0;
}
