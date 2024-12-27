#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <queue>

using namespace std;

class Graph {
    unordered_map<int, set<int>> adjList;

public:
    Graph() {
        cout << "Graph initialized!" << endl;
    }
    
    void addNode(const int &u, const int &v) {
        adjList[u].insert(v);
        adjList[v].insert(u); // Add the edge in both directions
    }

    void printList() {
        for (const auto &pair : adjList) {
            cout << pair.first << " -> ";
            for (const auto &neighbor : pair.second) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

    void BFS(int start) {
        // Check if the starting node is in the graph
        if (adjList.find(start) == adjList.end()) {
            cout << "Starting node " << start << " is not in the graph!" << endl;
            return;
        }

        unordered_set<int> visited;
        queue<int> q;

        visited.insert(start);
        q.push(start);

        cout << "BFS starting from node " << start << ": ";

        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";

            for (const auto& neighbor : adjList[current]) {
                if (visited.find(neighbor) == visited.end()) {
                    visited.insert(neighbor);
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int n;
    Graph g;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        g.addNode(u, v);
    }

    // g.printList();

    int startNode;
    // cout << "Enter the starting node for BFS: ";
    cin >> startNode;
    g.BFS(startNode);
    
    return 0;
}
