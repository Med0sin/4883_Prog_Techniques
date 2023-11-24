#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Station {
    int x, y;
    bool reachable;
    vector<int> neighbors;
};

bool isReachable(vector<Station>& stations, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(0); // Start with the order-dispatch station

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        visited[current] = true;

        for (int neighbor : stations[current].neighbors) {
            if (!visited[neighbor]) {
                q.push(neighbor);
            }
        }
    }

    // Check if all stations are reachable
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;

    while (cin >> n && n != 0) {
        vector<Station> stations(n);

        for (int i = 0; i < n; i++) {
            cin >> stations[i].x >> stations[i].y;
            stations[i].reachable = false; // Initialize as unreachable
        }

        // Connect stations to their two closest neighbors
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    int distance = (stations[i].x - stations[j].x) * (stations[i].x - stations[j].x) +
                                   (stations[i].y - stations[j].y) * (stations[i].y - stations[j].y);
                    if (stations[i].neighbors.size() < 2 || distance < stations[i].neighbors[0]) {
                        stations[i].neighbors.insert(stations[i].neighbors.begin(), distance);
                    } else if (distance < stations[i].neighbors[1]) {
                        stations[i].neighbors[1] = distance;
                    }
                }
            }
        }

        bool reachable = isReachable(stations, n);

        if (reachable) {
            cout << "All stations are reachable." << endl;
        } else {
            cout << "There are stations that are unreachable." << endl;
        }
    }

    return 0;
}
