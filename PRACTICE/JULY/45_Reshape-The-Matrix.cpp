#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
        {
            if(mat.size()*mat[0].size() == r*c)
            {
                vector<vector<int>> reshape(r, vector<int>(c));
                int count = 0;

                for(int i=0; i<mat.size(); ++i)
                {
                    for(int j=0; j<mat[i].size(); ++j)
                    {
                        int new_row = count / c;
                        int new_col = count % c;

                        reshape[new_row][new_col] = mat[i][j];
                        count++;
                    }
                }

                return reshape;
            }

            return mat;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> mat = {{1,2},{3,4}};
    int r = 1, c = 4;

    vector<vector<int>> ans = s1.matrixReshape(mat, r, c);
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