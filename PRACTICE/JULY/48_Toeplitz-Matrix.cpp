#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool isToeplitzMatrix(vector<vector<int>>& matrix) 
        {
            int m = matrix.size();
            int n = matrix[0].size();

            for(int i=0; i<m-1; ++i)
            {
                for(int j=0; j<n-1; ++j)
                {
                    if(matrix[i][j] != matrix[i+1][j+1])
                    {
                        return false;
                    }
                }
            }

            return true;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{1,2,3,4}, {5,1,2,3}, {9,5,1,2}};
    cout << s1.isToeplitzMatrix(matrix);
    cout << endl;

    return 0;
}