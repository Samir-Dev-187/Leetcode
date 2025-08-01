#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<int> luckyNumbers(vector<vector<int>>& matrix) 
        {
            int m = matrix.size();
            int n = matrix[0].size();

            int i = 0;
            while (i < m)
            {   
                int row, col;
                int min = INT_MAX;
                for(int j=0; j<n; ++j)
                {
                    if(matrix[i][j] < min)
                    {
                        min = matrix[i][j];
                        row = i, col = j;
                    }
                }
                bool isLuck = true;
                for(int r=0; r<m; ++r)
                {
                    if(matrix[row][col] < matrix[r][col])
                    {
                        isLuck = false;
                        break;
                    }
                }
                if(isLuck)
                {
                    return {matrix[row][col]};
                }
                i++;
            }
            
            return {};
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{3,7,8}, {9,11,13}, {15,16,17}};

    vector<int> ans = s1.luckyNumbers(matrix);
    cout << ans[0];
    cout << endl;

    return 0;
}