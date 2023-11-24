#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int N;
        cin >> N;
        vector<int> ages(N);

        for (int i = 0; i < N; ++i) {
            cin >> ages[i];
        }

        int captainAge = ages[N / 2]; // Middle age is the age of the captain

        cout << "Case " << caseNum << ": " << captainAge << endl;
    }

    return 0;
}
