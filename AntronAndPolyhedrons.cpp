#include<bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string, int> faceCounts={{"Tetrahedron", 4},{"Cube", 6},{"Octahedron", 8},{"Dodecahedron", 12},{"Icosahedron", 20}};
    int n;
    cin >> n;
    int totalFaces=0;
    for(int i=0;i<n;++i) {
        string polyhedron;
        cin >> polyhedron;
        totalFaces+=faceCounts[polyhedron];
    }
    cout << totalFaces << endl;
    return 0;
}