#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int surfaceArea(vector<vector<int>>& grid) 
        {
            int n = grid.size();
            int total = 0;

            for(int i = 0; i < n; ++i) 
            {
                for(int j = 0; j < n; ++j) 
                {
                    if(grid[i][j] > 0)
                    {
                        // Total faces of cubes
                        total += 6 * grid[i][j];
                        
                        // Minus internal vertical faces
                        total -= 2 * (grid[i][j] - 1);

                        // Minus glued faces with left cell
                        if(j > 0)
                            total -= 2 * min(grid[i][j], grid[i][j - 1]);

                        // Minus glued faces with top cell
                        if(i > 0)
                            total -= 2 * min(grid[i][j], grid[i - 1][j]);
                    }
                }
            }

            return total;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{1,2},{3,4}};

    cout << s1.surfaceArea(matrix);
    cout << endl;

    return 0;
}