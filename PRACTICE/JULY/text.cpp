#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> result;

        // Saare coordinates insert karo
        for(int r = 0; r < rows; ++r) {
            for(int c = 0; c < cols; ++c) {
                result.push_back({r, c});
            }
        }

        // Sort karo distance ke basis par
        sort(result.begin(), result.end(), [&](vector<int>& a, vector<int>& b) {
            int d1 = abs(a[0] - rCenter) + abs(a[1] - cCenter);
            int d2 = abs(b[0] - rCenter) + abs(b[1] - cCenter);
            return d1 < d2;
        });

        return result;
    }
};
