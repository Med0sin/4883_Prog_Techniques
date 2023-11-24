#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

struct Edge {
    int to, latency;
};



 //dijkstras algrithm : used to find the shorthest path from one node to every other node
void dijkstra(vector<vector<Edge>>& graph, int start, vector<int>& distance) {
    int n = graph.size();
    distance.assign(n, INF);
    distance[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        int dist_u = pq.top().first;
        pq.pop();

        if (dist_u != distance[u]) {
            continue;
        }

        for (const Edge& e : graph[u]) {
            int v = e.to;
            int weight = e.latency;

            if (distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
                pq.push({distance[v], v});
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    for (int caseNum = 1; caseNum <= N; caseNum++) {
        int n, m, S, T;
        cin >> n >> m >> S >> T;

        vector<vector<Edge>> graph(n);

        for (int i = 0; i < m; i++) {
            int u, v, latency;
            cin >> u >> v >> latency;
            graph[u].push_back({v, latency});
            graph[v].push_back({u, latency});
        }

        vector<int> distance;
        dijkstra(graph, S, distance);

        cout << "Case #" << caseNum << ": ";
        if (distance[T] == INF) {
            cout << "unreachable" << endl;
        } else {
            cout << distance[T] << endl;
        }
    }

    return 0;
}
