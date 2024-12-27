#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Box
{
    int height, width, depth;
};

bool compare(Box a, Box b)
{
    return a.width * a.depth > b.width * b.depth;
}

int maxStackHeight(vector<Box> &boxes)
{
    int n = boxes.size();
    vector<Box> allRotations;
    for (auto box : boxes)
    {
        allRotations.push_back({box.height, max(box.width, box.depth), min(box.width, box.depth)});
        allRotations.push_back({box.width, max(box.height, box.depth), min(box.height, box.depth)});
        allRotations.push_back({box.depth, max(box.height, box.width), min(box.height, box.width)});
    }

    sort(allRotations.begin(), allRotations.end(), compare);

    int m = allRotations.size();
    vector<int> dp(m);
    for (int i = 0; i < m; i++)
        dp[i] = allRotations[i].height;

    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (allRotations[i].width < allRotations[j].width &&
                allRotations[i].depth < allRotations[j].depth)
            {
                dp[i] = max(dp[i], dp[j] + allRotations[i].height);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main()
{
    vector<Box> boxes = {{4, 6, 7}, {1, 2, 3}, {4, 5, 6}, {10, 12, 32}};
    cout << "Max stack height: " << maxStackHeight(boxes) << endl;
    return 0;
}