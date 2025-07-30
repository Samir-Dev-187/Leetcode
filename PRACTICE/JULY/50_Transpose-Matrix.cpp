#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<vector<int>> transpose(vector<vector<int>>& matrix) 
        {
            int m = matrix.size(), n = matrix[0].size();
            vector<vector<int>> result(n, vector<int>(m));

            for(int i=0; i<m; ++i)
            {
                for(int j=0; j<n; ++j)
                {
                    result[j][i] = matrix[i][j];
                }
            }

            return result;
        }   
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    vector<vector<int>> ans = s1.transpose(matrix);
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