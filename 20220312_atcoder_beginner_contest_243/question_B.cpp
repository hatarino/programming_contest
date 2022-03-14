#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N], B[N];
    int ans1 = 0;
    int ans2 = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (A[i] == B[j] && i == j)
            {
                ++ans1;
            }
            else if (A[i] == B[j])
            {
                ++ans2;
            }
        }
    }

    cout << ans1 << endl;
    cout << ans2 << endl;

    return 0;
}
