#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) 
        {
            vector<vector<int>> newGrid(k, vector<int>(k));
            for(int i = 0; i < k; ++i)
            {
                for(int j = 0; j < k; ++j)
                {
                    newGrid[i][j] = grid[x+i][y+j];
                }
            }

            for(int col = 0; col < k; col++)
            {
                int top = 0, bottom = k-1;
                while(top < bottom)
                {
                    swap(newGrid[top][col], newGrid[bottom][col]);
                    top++;
                    bottom--;
                }
            }

            for(int i = 0; i < k; ++i)
            {
                for(int j = 0; j < k; ++j)
                {
                    grid[x+i][y+j] = newGrid[i][j];
                }
            }

            return grid;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int x = 1, y = 0, k = 3;

    vector<vector<int>> ans = s1.reverseSubmatrix(matrix, x, y, k);
    for(int i = 0; i < ans.size(); ++i)
    {
        for(int j = 0; j < ans[i].size(); ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}