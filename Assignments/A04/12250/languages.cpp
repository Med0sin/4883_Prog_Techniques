#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    // Create a map to store the mapping of words to languages
    map<string, string> languageMap;
    languageMap["HELLO"] = "ENGLISH";
    languageMap["HOLA"] = "SPANISH";
    languageMap["HALLO"] = "GERMAN";
    languageMap["BONJOUR"] = "FRENCH";
    languageMap["CIAO"] = "ITALIAN";
    languageMap["ZDRAVSTVUJTE"] = "RUSSIAN";

    string input;
    int caseNum = 1;

    while (cin >> input) {
        if (input == "#") {
            break; // End of input
        }

        string language = "UNKNOWN";

        // Check if the input matches any of the predefined words
        if (languageMap.find(input) != languageMap.end()) {
            language = languageMap[input];
        }

        cout << "Case " << caseNum << ": " << language << endl;
        caseNum++;
    }

    return 0;
}
