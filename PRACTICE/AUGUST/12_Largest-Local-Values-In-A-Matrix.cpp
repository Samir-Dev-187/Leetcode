#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2, 0));

        for (int i = 1; i < n - 1; ++i) {
            for (int j = 1; j < n - 1; ++j) {
                int localMax = 0;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        localMax = max(localMax, grid[i + x][j + y]);
                    }
                }
                maxLocal[i - 1][j - 1] = localMax;
            }
        }

        return maxLocal;
    }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{9,9,8,1}, {5,6,2,6}, {8,2,6,4}, {6,2,2,2}};

    vector<vector<int>> ans = s1.largestLocal(matrix);
    for(int i = 0; i < ans.size(); ++i)
    {
        for(int j = 0; j < ans[i].size(); ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;   
    }
    return 0;
}