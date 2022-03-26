#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    sort(A, A + N);

    int num = 0;
    for (int i = 0; i < N; ++i)
    {
        if (A[i] != num)
        {
            ans = num;
            cout << ans << endl;
            return 0;
        }
        else if (i == N - 1)
        {
            break;
        }
        else if (A[i] != A[i + 1])
        {
            ++num;
        }
    }

    ans = A[N - 1] + 1;
    cout << ans << endl;

    return 0;
}
