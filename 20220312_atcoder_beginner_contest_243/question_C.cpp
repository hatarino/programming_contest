#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    // first: Yi second: Xi
    tuple<int, int, char> YX[N];
    int X[N];
    int Y[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> X[i] >> Y[i];
    }
    string S;
    cin >> S;
    for (int i = 0; i < N; ++i)
    {
        YX[i] = make_tuple(Y[i], X[i], S[i]);
    }
    // Important element.
    sort(YX, YX + N);

    for (int i = 0; i < N - 1; ++i)
    {
        if (get<0>(YX[i]) != get<0>(YX[i + 1]))
        {
            continue;
        }
        if (get<2>(YX[i]) == 'R' && get<2>(YX[i + 1]) == 'L')
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
