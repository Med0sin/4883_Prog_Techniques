#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int N;
        cin >> N;

        vector<int> wallHeights(N);
        for (int i = 0; i < N; ++i) {
            cin >> wallHeights[i];
        }

        int highJumps = 0;
        int lowJumps = 0;

        for (int i = 1; i < N; ++i) {
            if (wallHeights[i] > wallHeights[i - 1]) {
                highJumps++;
            } else if (wallHeights[i] < wallHeights[i - 1]) {
                lowJumps++;
            }
        }

        cout << "Case " << caseNum << ": " << highJumps << " " << lowJumps << endl;
    }

    return 0;
}
