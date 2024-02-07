#include <iostream>
#include <algorithm>

using namespace std;

int minMoves(int a, int b)
{
    int moves = abs(b - a);
    for (int k = 1; k <= 10; ++k)
    {
        moves = min(moves, (abs(b - a) / k) + (abs(b - a) % k));
    }
    return moves;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int a, b;
        cin >> a >> b;
        cout << minMoves(a, b) << endl;
    }
    return 0;
}
