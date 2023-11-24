#include <iostream>
#include <vector>
#include <string>

using namespace std;

int calculateNumber(string word) {
    vector<string> numbers = {"one", "two", "three"};

    for (int i = 0; i < numbers.size(); i++) {
        if (word.size() == numbers[i].size()) {
            int diffCount = 0;
            for (int j = 0; j < word.size(); j++) {
                if (word[j] != numbers[i][j]) {
                    diffCount++;
                    if (diffCount > 1) {
                        break;
                    }
                }
            }
            if (diffCount <= 1) {
                return i + 1;
            }
        }
    }

    return -1; // Not recognized
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Consume the newline

    for (int i = 0; i < n; i++) {
        string word;
        getline(cin, word);
        int number = calculateNumber(word);
        cout << number;
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
