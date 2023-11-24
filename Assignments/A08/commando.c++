#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

// Function to perform BFS and find the minimum time required to reach each building from the starting building
unordered_map<int, int> findMinimumTime(int buildings, const vector<vector<int> >& roads, int start) {
    unordered_map<int, int> minTime;
    for (int i = 0; i < buildings; ++i) {
        minTime[i] = INT_MAX;
    }
    minTime[start] = 0;  // The starting building has a minimum time of 0

    // Create an adjacency list from the list of roads
    unordered_map<int, vector<int> > adjacencyList;
    for (const vector<int>& road : roads) {
        adjacencyList[road[0]].push_back(road[1]);
        adjacencyList[road[1]].push_back(road[0]);
    }

    // Perform BFS
    queue<int> q;
    q.push(start);
    while (!q.empty()) {
        int currentBuilding = q.front();
        q.pop();
        for (int neighbor : adjacencyList[currentBuilding]) {
            if (minTime[neighbor] == INT_MAX) {
                minTime[neighbor] = minTime[currentBuilding] + 1;
                q.push(neighbor);
            }
        }
    }

    return minTime;
}

int main() {
    int T;
    cin >> T;
    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int N, R;
        cin >> N >> R;
        vector<vector<int> > roads(R, vector<int>(2));
        for (int i = 0; i < R; ++i) {
            cin >> roads[i][0] >> roads[i][1];
        }
        int s, d;
        cin >> s >> d;

        // Find the minimum time required for each building from the starting building
        unordered_map<int, int> minTime = findMinimumTime(N, roads, s);

        // Output the result
        cout << "Case " << caseNum << ": " << minTime[d] << endl;
    }

    return 0;
}
