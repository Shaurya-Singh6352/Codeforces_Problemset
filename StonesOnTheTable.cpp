#include<bits/stdc++.h>
using namespace std;
int countStonesToRemove(int n, string s) {
    int removedStones=0;
    char prevColor='\0';
    for(int i=0;i<n;i++) {
        if(s[i]==prevColor) {
            removedStones++;
        } else {
            prevColor=s[i];
        }
    }
    return removedStones;
}
int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int result=countStonesToRemove(n, s);
    cout << result << endl;
    return 0;
}