#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    while (true) {
        int N;
        cin >> N;
        
        // Check for the end of input
        if (N == 0) break;

        vector<int> desiredOrder(N);
        stack<int> station; // Stack to represent the station platform
        
        for (int i = 0; i < N; i++) {
            cin >> desiredOrder[i];
        }

        int coachToMove = 1; // The next coach to move into the station
        bool possible = true;

        // Iterate through the desired order of coaches
        for (int i = 0; i < N; i++) {
            // Move coaches from the station to the output
            while (!station.empty() && station.top() == desiredOrder[i]) {
                station.pop();
                i++; // Move to the next desired coach
            }

            // Check if the current coach can be moved to the station
            if (coachToMove == desiredOrder[i]) {
                coachToMove++;
            } else {
                // If not, move it to the station
                station.push(coachToMove);
                coachToMove++;
            }

            // Check if the desired order is no longer achievable
            if (i < N && station.empty() && coachToMove > desiredOrder[i]) {
                possible = false;
                break;
            }
        }

        // Check if the reorganization is possible
        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

        cout << endl; // Add an empty line after each block
    }

    return 0;
}