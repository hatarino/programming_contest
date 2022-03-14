#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int M;
    cin >> M;
    int x;
    map<int, int> AMap;
    for (int i = 0; i < N; ++i)
    {
        cin >> x;
        AMap[x]++;
    }
    for (int i = 0; i < M; ++i)
    {
        cin >> x;
        if (AMap[x] == 0)
        {
            cout << "No" << endl;
            return 0;
        }
        AMap[x]--;
    }
    cout << "Yes" << endl;

    return 0;
}
