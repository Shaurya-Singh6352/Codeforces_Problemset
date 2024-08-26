#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int maxTime = 0;
        string bestPassword;
        for (char c = 'a'; c <= 'z'; ++c) {
            for (int i = 0; i <= s.length(); ++i) {
                string newPassword = s.substr(0, i) + c + s.substr(i);
                int time = 2;
                for (int j = 1; j < newPassword.length(); ++j) {
                    if (newPassword[j] == newPassword[j - 1]) {
                        time += 1;
                    } else {
                        time += 2;
                    }
                }
                if (time > maxTime) {
                    maxTime = time;
                    bestPassword = newPassword;
                }
            }
        }
        cout << bestPassword << endl;
    }
    
    return 0;
}
