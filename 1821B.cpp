#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], arr2[n];
        int j, k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr2[i])
            {
                j = i;
                break;
            }
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] != arr2[i])
            {
                k = i;
                break;
            }
        }
        for (int i = k; i < n - 1; i++)
        {
            if (arr2[i] <= arr2[i + 1])
            {
                k++;
            }
            else
            {
                break;
            }
        }
        for (int i = j; i > 0; i--)
        {
            if (arr2[i] >= arr2[i - 1])
            {
                j--;
            }
            else
            {
                break;
            }
        }
        cout << j + 1 << " " << k + 1 << endl;
    }

    return 0;
}