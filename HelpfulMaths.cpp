#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<string> sequences;
    string currentSequence;
    for(char c : s) {
        if(c=='+') {
            if(!currentSequence.empty()) {
                sequences.push_back(currentSequence);
                currentSequence.clear();
            }
        }
        else {
            currentSequence+=c;
        }
    }
    if(!currentSequence.empty()) {
        sequences.push_back(currentSequence);
    }
    sort(sequences.begin(), sequences.end());
    string rearrangedSum;
    for(int i=0;i<sequences.size();++i) {
        rearrangedSum+=sequences[i];
        if(i<sequences.size()-1) {
            rearrangedSum+="+";
        }
    }
    cout<<rearrangedSum<<endl;
    return 0;
}