#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    vector<int> S;

    for (int i = 0; i < Q; ++i)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int x;
            cin >> x;
            S.push_back(x);
        }
        else if (query == 2)
        {
            int x;
            cin >> x;
            int c;
            cin >> c;
            int xNum = count(S.begin(), S.end(), x);
            int num = min(xNum, c);
            int len = S.size();
            for (int j = 0; j < len; ++j)
            {
                if (S[j] == x)
                {
                    S.erase(S.begin() + j, S.begin() + j + num);
                    break;
                }
            }
        }
        else if (query == 3)
        {
            int dif = S.back() - S.front();
            cout << dif << endl;
        }
        sort(S.begin(), S.end());
    }

    return 0;
}
