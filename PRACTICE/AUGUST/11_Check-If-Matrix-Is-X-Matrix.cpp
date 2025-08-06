#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool checkXMatrix(vector<vector<int>>& grid) 
        {
            int n = grid.size();
            
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    if (i == j || i + j == n - 1)
                    {
                        // Diagonal elements must be non-zero
                        if (grid[i][j] == 0) return false;
                    }
                    else
                    {
                        // Non-diagonal elements must be zero
                        if (grid[i][j] != 0) return false;
                    }
                }
            }

            return true;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{5,0,0,1}, {0,4,1,5}, {0,5,2,0}, {4,1,0,2}};

    cout << s1.checkXMatrix(matrix);
    cout << endl;
    
    return 0;
}