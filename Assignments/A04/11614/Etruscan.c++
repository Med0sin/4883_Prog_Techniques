#include <iostream>

using namespace std;

int calculateRows(long long numWarriors) {
    int rows = 0;
    long long warriorsInCurrentRow = 1;

    while (numWarriors >= warriorsInCurrentRow) {
        numWarriors -= warriorsInCurrentRow;
        warriorsInCurrentRow++;
        rows++;
    }

    return rows;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        long long n;
        cin >> n;
        int rows = calculateRows(n);
        cout << rows << endl;
    }

    return 0;
}
