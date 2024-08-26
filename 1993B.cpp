#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long odd_count = 0, even_count = 0, even_sum = 0;
        long long odd_max = 0, even_max = 0;

        for (int i = 0; i < n; i++)
        {
            long long num;
            cin >> num;

            if (num % 2 == 1)
            {
                odd_count++;
                odd_max = max(odd_max, num);
            }
            else
            {
                even_count++;
                even_sum += num;
                even_max = max(even_max, num);
            }
        }

        if (even_count == 0 || odd_count == 0)
        {
            cout << "0\n";
            continue;
        }

        long long ans = 0;

        // Sort the numbers in descending order
        long long numbers[n];
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
        sort(numbers, numbers + n);

        for (int i = n - 1; i >= 0; i--)
        {
            if (numbers[i] % 2 == 0)
            {
                if (numbers[i] > odd_max)
                {
                    odd_max += even_max;
                    ans++;
                }
                else
                {
                    odd_max += numbers[i];
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}