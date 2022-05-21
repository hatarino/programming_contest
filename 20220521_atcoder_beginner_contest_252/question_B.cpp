#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int A[N];

    vector<int> maxIndex;

    int maxV = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
        maxV = max(maxV, A[i]);
    }

    for (int i = 0; i < N; ++i)
    {
        if (A[i] == maxV)
        {
            maxIndex.push_back(i);
        }
    }

    int size = maxIndex.size();
    for (int i = 0; i < K; ++i)
    {
        int b;
        cin >> b;
        for (int j = 0; j < maxIndex.size(); ++j)
        {
            if (maxIndex[j] == b - 1)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
