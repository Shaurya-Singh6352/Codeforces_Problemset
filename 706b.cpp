#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    int q;
    cin >> q;
    int m;
    for (int i = 0; i < q; i++)
    {
        cin >> m;
        bool check = false;
        int k = 0;
        for (int j = 0; j < n && check == false; j++)
        {
            if (x[j] > m)
            {
                check = true;
                k = j;
            }
        }
        if(check==true)
        cout << k << endl;
        else
        cout << n << endl;
    }
    return 0;
}