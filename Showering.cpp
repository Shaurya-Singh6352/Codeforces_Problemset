#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        int lEnd = 0;
        bool canS = false;
        for (int i = 0; i < n; ++i) {
            int l, r;
            cin >> l >> r;
            if (i == 0 && l >= s) {
                canS = true;
            }
            if (i > 0 && l - lEnd >= s) {
                canS = true;
            }
            lEnd = r;
        }
        if (m - lEnd >= s) {
            canS = true;
        }
        cout << (canS ? "YES" : "NO") << endl;
    }
    return 0;
}
