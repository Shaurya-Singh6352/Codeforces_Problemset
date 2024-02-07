#include <bits/stdc++.h>
using namespace std;
int elephant(int x)
{
    int steps = 0;

    while (x > 0)
    {
        if (x >= 5)
        {
            x = x - 5;
            steps++;
        }
        else
        {
            x = 0;
            steps++;
        }
    }
    return steps;
}
int main()
{
    int x;
    cin >> x;
    int min_steps = elephant(x);
    cout << "Minimum steps: " << min_steps << endl;
    return 0;
}