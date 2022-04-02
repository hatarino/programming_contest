#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    float x, y;

    float l = sqrt(pow(A, 2) + pow(B, 2));

    x = A / l;
    y = B / l;

    cout << x << " " << y << endl;

    return 0;
}
