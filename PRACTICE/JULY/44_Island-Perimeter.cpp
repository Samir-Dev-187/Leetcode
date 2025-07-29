#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
        int islandPerimeter(vector<vector<int>>& grid)
        {
            int par = 0;
            int rows = grid.size();
            int cols = grid[0].size();

            for(int i = 0; i < rows; ++i) {
                for(int j = 0; j < cols; ++j) {
                    if(grid[i][j] == 1) {
                        // Up
                        if(i == 0 || grid[i-1][j] == 0) par++;
                        // Down
                        if(i == rows-1 || grid[i+1][j] == 0) par++;
                        // Left
                        if(j == 0 || grid[i][j-1] == 0) par++;
                        // Right
                        if(j == cols-1 || grid[i][j+1] == 0) par++;
                    }
                }
            }

            return par;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> grid = {{0,1,0,0}, {1,1,1,0}, {0,1,0,0}, {1,1,0,0}};
    cout << s1.islandPerimeter(grid);
    cout << endl;

    return 0;
}