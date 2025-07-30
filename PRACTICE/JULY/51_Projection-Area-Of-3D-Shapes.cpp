#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int projectionArea(vector<vector<int>>& grid) 
        {   
            int n = grid.size();
            int sum = 0;

            int count = 0;
            for(int i=0; i<n; ++i) // Top View
            {
                for(int j=0; j<n; ++j)
                {
                    if(grid[i][j] != 0)
                    {
                        count++;
                    }
                }
            }

            for(int i=0; i<n; ++i) // Front view
            {
                int maxNum = INT_MIN;
                for(int j=0; j<n; ++j)
                {
                    maxNum = max(maxNum, grid[i][j]);
                }
                sum += maxNum;
            }

            for(int i=0; i<n; ++i) // Side View
            {
                int maxNum = INT_MIN;
                for(int j=0; j<n; ++j)
                {
                    maxNum = max(maxNum, grid[j][i]);
                }
                sum += maxNum;
            }

            return (sum + count);
        }
};

int main() 
{
    Solution  s1;
    vector<vector<int>> matrix = {{1,2}, {3,4}};

    cout << s1.projectionArea(matrix);
    cout << endl;
    
    return 0;
}