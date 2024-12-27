#include <iostream>
#include <list>
#include <unordered_map>
#include <set>

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
    return 0;
}
