#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int N;
        cin >> N;

        vector<int> creatureSpeeds(N);
        for (int i = 0; i < N; ++i) {
            cin >> creatureSpeeds[i];
        }

        int requiredSpeed = *max_element(creatureSpeeds.begin(), creatureSpeeds.end());

        cout << "Case " << caseNum << ": " << requiredSpeed << endl;
    }

    return 0;
}
