#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> v(n - 1), ans;
        for (auto &i : v) cin >> i;

        ans.push_back(v.back());
        ans.push_back(1e9);

        for (long long i = n - 3; i >= 0; --i)
            ans.push_back(ans.back() - v[i]);

        reverse(ans.begin(), ans.end());

        for (auto x : ans) 
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
