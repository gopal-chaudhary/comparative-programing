#include <iostream>
#include <list>
#include <unordered_map>
#include <set>
#include <vector>
#include <unordered_set>

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

    void DFS(int start, unordered_set<int>& visited) {
        visited.insert(start);
        cout << start << " ";

        for (const auto& neighbor : adjList[start]) {
            if (visited.find(neighbor) == visited.end()) {
                DFS(neighbor, visited);
            }
        }
    }

    void performDFS(int start) {
        unordered_set<int> visited;
        cout << "DFS starting from node " << start << ": ";
        DFS(start, visited);
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

    g.printList();

    int startNode;
    cin >> startNode;
    g.performDFS(startNode);
    
    return 0;
}
