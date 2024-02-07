#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int current_people=0;
    int max_people=0;
    for(int i=0;i<n;++i) {
        int a,b;
        cin >> a >> b;
        current_people+=b;
        max_people=max(current_people, max_people);
        current_people-=a;
    }
    cout << max_people << endl;
}