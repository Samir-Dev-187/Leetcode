#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int diagonalSum(vector<vector<int>>& mat) 
        {
            int m = mat.size();
            int n = mat[0].size();
            int sum = 0;

            int j = 0;
            for(int i=0; i<m; ++i)
            {
                sum += mat[i][j];
                j++;
            }
            
            int rMid = m / 2;
            int cMid = n / 2;
            int i = 0;
            for(int j=n-1; j>=0; --j)
            {
                if(i != rMid && j != cMid)
                {
                    sum += mat[i][j];
                }
                i++;
            }

            return sum;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};

    cout << s1.diagonalSum(matrix);
    cout << endl;
    
    return 0;
}