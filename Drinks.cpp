#include<bits/stdc++.h>
using namespace std;
double orange_juice_fraction(int n, vector<double> pi) {
    double total_juice=0;
    for(double p : pi) {
        total_juice+=p/100.0;
    }
    double total_volume=n;
    return total_juice/total_volume*100.0;
}
int main() {
    int n;
    cin >> n;
    vector<double> pi(n);
    for(int i=0;i<n;++i) {
        cin >> pi[i];
    }
    double result=orange_juice_fraction(n, pi);
    cout << setprecision(14) << result << endl;
    return 0;
}