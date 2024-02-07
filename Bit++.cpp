#include<bits/stdc++.h>
using namespace std;
int execute_bitpp(const vector<string>& program) {
    int x=0;
    for(const string& statement:program) {
        if(statement.find("++")!=string::npos) {
            x++;
        }
        else if(statement.find("--")!=string::npos) {
            x--;
        }
    }
    return x;
}
int main()
{
    int n;
    cin >> n;
    vector<string> program;
    for(int i=0;i<n;++i) {
        string statement;
        cin >> statement;
        program.push_back(statement);
    }
    int final_value=execute_bitpp(program);
    cout << final_value << endl;
    return 0;
}