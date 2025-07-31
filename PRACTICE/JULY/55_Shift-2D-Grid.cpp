#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
        {
            int m = grid.size();
            int n = grid[0].size();
            int total = m * n;

            vector<int> temp;
            for(int i=0; i<m; ++i)
            {
                for(int j=0; j<n; ++j)
                {
                    temp.push_back(grid[i][j]); 
                }
            }

            vector<int> shifted(total);
            for(int i=0; i<total; ++i)
            {
                shifted[(i+k) % total] = temp[i];   
            }

            vector<vector<int>> result(m, vector<int>(n));  
            for(int i=0; i < total; ++i)
            {
                result[i / n][i % n] = shifted[i];
            }

            return result;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 1;

    vector<vector<int>> ans = s1.shiftGrid(matrix, k);
    for(int i=0; i<ans.size(); ++i)
    {
        for(int j=0; j<ans[i].size(); ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}