#include <bits/stdc++.h>
using namespace std;

// Now result is timeout.

int N;
int X;
int a[100];
int b[100];

bool dfs(int i, int sum)
{
    if (i == N)
    {
        return sum == X;
    }
    if (dfs(i + 1, sum + a[i]))
    {
        return true;
    }
    if (dfs(i + 1, sum + b[i]))
    {
        return true;
    }
    return false;
}

int main()
{
    cin >> N;
    cin >> X;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }

    if (dfs(0, 0))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
