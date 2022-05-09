#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<int> val(N + 1), pos(N + 1);
    for (int i = 1; i <= N; ++i)
    {
        val[i] = i;
        pos[i] = i;
    }

    int x[Q];
    for (int i = 0; i < Q; ++i)
    {
        cin >> x[i];
    }

    for (int i = 0; i < Q; ++i)
    {
        int pos0 = pos[x[i]];
        int pos1 = pos0;

        if (pos0 != N)
        {
            ++pos1;
        }
        else
        {
            --pos1;
        }

        int val0 = val[pos0];
        int val1 = val[pos1];

        swap(val[pos0], val[pos1]);
        swap(pos[val0], pos[val1]);
    }

    for (int i = 1; i <= N; ++i)
    {
        cout << val[i];
        if (i != N)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}
