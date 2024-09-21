
// EKO - Eko
// #binary-search
// Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Mirko is only allowed to cut a single row of trees.

// Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

// Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.

// Input
// The first line of input contains two space-separated positive integers, N (the number of trees, 1 ≤ N ≤ 1 000 000) and M (Mirko‟s required wood amount, 1 ≤ M ≤ 2 000 000 000).

// The second line of input contains N space-separated positive integers less than 1 000 000 000, the heights of each tree (in metres). The sum of all heights will exceed M, thus Mirko will always be able to obtain the required amount of wood.

// Output
// The first and only line of output must contain the required height setting.

// Example

// Input:---------
// 4 7
// 20 15 10 17
// Output:-----------
// 15

// Input:-------------
// 5 20
// 4 42 40 26 46
// Output:--------------
// 36
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solve {
private:
    // This function calculates the amount of wood obtained by cutting at height
    long long calculateHeight(const vector<int>& treeHeight, int height) {
        long long sum = 0; // Use long long to avoid overflow
        for (const auto& val : treeHeight) {
            if (val > height) {
                sum += (val - height); // Only add the part that is cut off
            }
        }
        return sum; // Total wood obtained
    }

public:
    int curTreeFromHeight(int n, int m, const vector<int>& treeHeight) {
        int left = 0;
        int right = *max_element(treeHeight.begin(), treeHeight.end()); // Set right to max height of trees
        int ansHeight = 0; // To store the best height found

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long currSum = calculateHeight(treeHeight, mid);

            if (currSum >= m) { // If we can get at least M wood
                ansHeight = mid; // Update the best height found
                left = mid + 1; // Try for a higher height
            } else {
                right = mid - 1; // Try for a lower height
            }
        }
        return ansHeight; // Return the maximum height
    }
};

int main() {
    int n; // number of trees
    int m; // amount of wood required
    cin >> n >> m;

    vector<int> treeHeight(n); // Declare the vector with size n
    for (int i = 0; i < n; i++) {
        cin >> treeHeight[i]; // Read values into the vector
    }

    Solve s;
    cout << s.curTreeFromHeight(n, m, treeHeight) << endl; // Call the function to find the max height

    return 0;
}
