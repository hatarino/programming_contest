#include <bits/stdc++.h>
using namespace std;

// SEE: https://atcoder.jp/contests/arc061/tasks/arc061_a

int main()
{
    string S;
    cin >> S;

    int N = S.size();
    long long sum = 0;

    // Use N-1 because max number "+" = N-1.
    for (int bit = 0; bit < (1 << N - 1); ++bit)
    {
        // Type long long.
        // Use for handling large number.
        long long tmp = 0;
        for (int i = 0; i < N - 1; ++i)
        {
            tmp *= 10;
            // Convert char to long long.
            tmp += S[i] - '0';
            if (bit & (1 << i))
            {
                sum += tmp;
                tmp = 0;
            }
        }
        tmp *= 10;
        // Back method is fetch last element of string.
        tmp += S.back() - '0';
        sum += tmp;
    }
    cout << sum << endl;

    return 0;
}
