#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, K, X;
    cin >> N >> K >> X;
    long long A[N];
    for (long long i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    sort(A, A + N, greater<long long>());

    for (long long i = 0; i < N; ++i)
    {
        if (K > 0)
        {
            long long num = min(K, A[i] / X);
            A[i] -= num * X;
            K -= num;
        }
        else
        {
            break;
        }
    }

    if (K > 0)
    {
        sort(A, A + N, greater<long long>());
    }

    for (long long i = 0; i < N; ++i)
    {
        if (K > 0)
        {
            A[i] = 0;
            --K;
        }
        else
        {
            break;
        }
    }

    long long ans = 0;

    for (long long i = 0; i < N; ++i)
    {
        ans += A[i];
    }

    cout << ans << endl;

    return 0;
}
