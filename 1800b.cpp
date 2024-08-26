#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int lower[26] = {}, upper[26] = {};
        for (char c : s) {
            if (isupper(c)) 
                ++upper[c - 'A'];
            else 
                ++lower[c - 'a'];
        }

        int ans = 0;
        for (int i = 0; i < 26; ++i) {
            int pairs = min(lower[i], upper[i]);
            ans += pairs;
            int remaining = abs(lower[i] - upper[i]) / 2;
            int to_add = min(k, remaining);
            ans += to_add;
            k -= to_add;
        }

        cout << ans << '\n';
    }

    return 0;
}
