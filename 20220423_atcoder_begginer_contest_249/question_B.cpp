#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int size = S.size();
    bool useSmall = false;
    bool useBig = false;
    bool useDiff = true;

    for (int i = 0; i < size; i++)
    {
        if (!useSmall && S[i] >= 'a' && S[i] <= 'z')
        {
            useSmall = true;
        }
        if (!useBig && S[i] >= 'A' && S[i] <= 'Z')
        {
            useBig = true;
        }

        for (int j = i + 1; j < size; j++)
        {
            if (S[i] == S[j])
            {
                useDiff = false;
                break;
            }
        }
    }

    if (useSmall && useBig && useDiff)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
