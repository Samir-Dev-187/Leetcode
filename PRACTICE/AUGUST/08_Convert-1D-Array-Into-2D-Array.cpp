#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) 
        {
            if(original.size() != (m * n)) return {};

            vector<vector<int>> mat(m, vector<int>(n));
            int k = 0;
            for(int i = 0; i < m; ++i)
            {
                for(int j = 0; j < n; ++j)
                {
                    mat[i][j] = original[k++];
                }
            }

            return mat;
        }
};

int main() 
{
    Solution s1;
    vector<int> vec = {1,2,3,4};
    int m = 2, n = 2;

    vector<vector<int>> ans = s1.construct2DArray(vec, m, n);
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