#include<bits/stdc++.h>
using namespace std;
int yearsToSurpass(int a, int b) {
    if(a>=b) {
        return 0;
    }
    double n=ceil(log2(a)/log2(2.0/3.0));
    return static_cast<int>(n);
}
int main() {
    int a,b;
    cin >> a >> b;
    int years=yearsToSurpass(a,b);
    cout << years << endl;
    return 0;
}