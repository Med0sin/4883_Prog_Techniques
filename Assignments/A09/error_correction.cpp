#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        vector<vector<int> > matrix(n, vector<int>(n, 0));
        vector<int> rowCount(n, 0);
        vector<int> colCount(n, 0);

        // Read the matrix and calculate row and column counts
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
                rowCount[i] += matrix[i][j];
                colCount[j] += matrix[i][j];
            }
        }

        int rowErrors = 0;
        int colErrors = 0;
        int rowErrorIndex = -1;
        int colErrorIndex = -1;

        // Check rows for parity property and errors
        for (int i = 0; i < n; ++i) {
            if (rowCount[i] % 2 != 0) {
                rowErrors++;
                rowErrorIndex = i;
            }
        }

        // Check columns for parity property and errors
        for (int j = 0; j < n; ++j) {
            if (colCount[j] % 2 != 0) {
                colErrors++;
                colErrorIndex = j;
            }
        }

        if (rowErrors == 0 && colErrors == 0) {
            cout << "OK" << endl;
        } else if (rowErrors == 1 && colErrors == 1) {
            cout << "Change bit (" << rowErrorIndex + 1 << "," << colErrorIndex + 1 << ")" << endl;
        } else {
            cout << "Corrupt" << endl;
        }
    }

    return 0;
}
