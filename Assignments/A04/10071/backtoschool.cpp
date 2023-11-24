#include <iostream>

using namespace std;

int main() {
    int v, t;

    while (cin >> v >> t) {
        // Calculate displacement for 2t using the formula
        int displacement = 2 * v * t;

        cout << displacement << endl;
    }

    return 0;
}
