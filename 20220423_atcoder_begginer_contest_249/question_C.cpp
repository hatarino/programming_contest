#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    string S[N];
    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> S[i];
    }

    for (int bit = 0; bit < (1 << N); ++bit)
    {
        string tmp;
        map<char, int> cnt;
        for (int i = 0; i < N; ++i)
        {
            if (bit & (1 << i))
            {
                tmp += S[i];
            }
        }

        int size = tmp.size();
        for (int i = 0; i < size; ++i)
        {
            cnt[tmp[i]]++;
        }

        int cntK = 0;
        for (auto i = cnt.begin(); i != cnt.end(); ++i)
        {
            if (i->second == K)
            {
                ++cntK;
            }
        }

        ans = max(ans, cntK);
    }

    cout << ans << endl;

    return 0;
}
