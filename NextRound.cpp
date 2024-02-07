#include<bits/stdc++.h>
using namespace std;
int count_advancing(int n, int k, const vector<int>& scores) {
    int count=0;
    int kth_score=scores[k-1];
    for(int score : scores) {
        if(score >= kth_score) {
            count++;
            kth_score=score;
        }
        else {
            break;
        }
    }
    return count;
}
int main() {
    int n,k;
    cin >> n >> k;
    vector<int> scores(n);
    for(int i=0;i<n;++i) {
        cin >> scores[i];
    }
    int advancing=count_advancing(n,k,scores);
    cout << advancing << endl;
    return 0;
}