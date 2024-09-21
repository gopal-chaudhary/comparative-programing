#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

// 4
// 4
// 1 2 3 4
// 4 1 2 3
// 5 4 2 1
// 1 2 4 3

void findRepeatingElementsInRows(int n, int m, const vector<vector<int>>& arr) {
    // Step 1: Initialize the map with elements from the first row
    unordered_map<int, bool> elementMap;
    for (int i = 0; i < m; i++) {
        elementMap[arr[0][i]] = true;
    }
    
    // Step 2: Check elements in subsequent rows
    for (int i = 1; i < n; i++) {
        unordered_set<int> currentRowElements;
        for (int j = 0; j < m; j++) {
            currentRowElements.insert(arr[i][j]);
        }
        // Update map based on current row
        for (auto& pair : elementMap) {
            if (pair.second && currentRowElements.find(pair.first) == currentRowElements.end()) {
                pair.second = false;
            }
        }
    }
    
    // Step 3: Output the result
    cout << "[ ";
    for (const auto& pair : elementMap) {
        if (pair.second) {
            cout << pair.first << " ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    findRepeatingElementsInRows(n, m, arr);
    return 0;
}
