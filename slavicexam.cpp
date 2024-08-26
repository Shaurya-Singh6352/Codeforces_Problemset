#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        int n = s.size(), m = t.size();
        int j = 0;
        bool poss = false;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '?' || s[i] == t[j]) {
                if (s[i] == t[j]) ++j;
                if (j == m) {
                    poss = true;
                    break;
                }
            }
        }
        if (!poss) {
            cout << "NO" << endl;
            continue;
        }
        j = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '?') {
                s[i] = (j < m && t[j] == s[i]) ? t[j++] : 'a';
            }
        }
        cout << "YES" << endl << s << endl;
    }
    return 0;
}
