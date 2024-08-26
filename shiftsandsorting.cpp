#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        long long ans=0, ct=0;
        for(char c : s) {
            if(c == '1') {
                ct++;
            } else if(c == '0' && ct > 0) {
                ans+=ct + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}