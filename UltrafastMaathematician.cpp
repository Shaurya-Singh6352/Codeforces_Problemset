#include<bits/stdc++.h>
using namespace std;
string shapurs_contest(string a, string b) {
    string result="";
    for(int i=0;i<a.length();i++) {
        if(a[i]!=b[i]) {
            result+="1";
        } else {
            result+="0";
        }
    }
    return result;
}

int main() {
    string a,b;
    cin >> a >> b;
    string result=shapurs_contest(a,b);
    cout << result << endl;
    return 0;
}