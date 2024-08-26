#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int suneetWins = 0;

        vector<int> suneetC = {a1, a2};
        vector<int> slavicC = {b1, b2};

        // Consider all permutations of card flips for both players
        for (int i = 0; i < 2; ++i) { // First permutation for Suneet
            for (int j = 0; j < 2; ++j) { // First permutation for Slavic
                // Determine who wins the rounds
                int suneetR1 = suneetC[i];
                int slavicR1 = slavicC[j];
                int suneetR2 = suneetC[1-i];
                int slavicR2 = slavicC[1-j];

                int suneetRW = 0;
                int slavicRW = 0;

                if (suneetR1 > slavicR1) ++suneetRW;
                else if (suneetR1 < slavicR1) ++slavicRW;

                if (suneetR2 > slavicR2) ++suneetRW;
                else if (suneetR2 < slavicR2) ++slavicRW;

                if (suneetRW > slavicRW) {
                    ++suneetWins;
                }
            }
        }

        cout << suneetWins << endl;
    }

    return 0;
}
