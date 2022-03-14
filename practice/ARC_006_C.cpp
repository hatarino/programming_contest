#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/arc006/tasks/arc006_3

int main()
{
    int coin[6] = {500, 100, 50, 10, 5, 1};
    int pay;
    cin >> pay;
    int change = 1000 - pay;
    int answer = 0;
    for (int i = 0; i < 6; ++i)
    {
        int num = change / coin[i];
        change -= num * coin[i];
        answer += num;
    }

    cout << answer << endl;

    return 0;
}
