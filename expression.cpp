#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int d = a + (b * c);
    d = max(d, a * (b + c));
    d = max(d, a * b * c);
    d = max(d, (a + b) * c);
    d = max(d, (a * b) + c);
    d = max(d, a + b + c);
    cout << d << endl;

    return 0;
}