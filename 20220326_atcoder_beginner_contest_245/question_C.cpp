#include <bits/stdc++.h>
using namespace std;
// Use long long type because max value of Ai, Bi, K is 10^9.
typedef long long ll;

// Now result is wrong.
int main()
{
    ll N, K;
    cin >> N >> K;
    ll A[N];
    ll B[N];
    bool dpA[N];
    bool dpB[N];
    dpA[0] = true;
    dpB[0] = true;
    for (ll i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    for (ll i = 0; i < N; ++i)
    {
        cin >> B[i];
    }

    for (ll i = 1; i < N; ++i)
    {
        if (dpA[i - 1])
        {
            if (abs(A[i] - A[i - 1]) <= K)
            {
                dpA[i] = true;
            }
            if (abs(B[i] - A[i - 1]) <= K)
            {
                dpB[i] = true;
            }
        }

        if (dpB[i - 1])
        {
            if (abs(A[i] - B[i - 1]) <= K)
            {
                dpA[i] = true;
            }
            if (abs(B[i] - B[i - 1]) <= K)
            {
                dpB[i] = true;
            }
        }
    }

    if (dpA[N - 1] || dpB[N - 1])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
