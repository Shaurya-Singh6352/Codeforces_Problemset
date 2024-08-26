#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cout << "? 1 2" << endl;
        cout.flush();
        int ar1_2;
        cin >> ar1_2;
        cout << "? 1 3" << endl;
        cout.flush();
        int ar1_3;
        cin >> ar1_3;
        int x;
        if (ar1_2 == 2)
        {
            x = 3;
        }
        else if (ar1_3 == 3)
        {
            x = 4;
        }
        else
        {
            int delta = (ar1_3 - ar1_2) - 1;
            x = delta + 2;
        }
        cout << "! " << x << endl;
        cout.flush();
    }

    return 0;
}
