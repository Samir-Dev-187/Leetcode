#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        void rotate90(vector<vector<int>>& mat)
        {
            int n = mat.size();

            // Transpose
            for(int i=0; i<n; ++i)  
            {
                for(int j=i+1; j<n; ++j)
                {
                    swap(mat[i][j], mat[j][i]);
                }
            }

            // Rotation
            for(int i=0; i<n; ++i)
            {
                reverse(mat[i].begin(), mat[i].end());
            }
        }

        bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) 
        {
            for(int i=0; i<4; ++i)
            {
                if(mat == target) return true;
                rotate90(mat);
            }

            return false;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{0,1}, {1,0}};
    vector<vector<int>> target = {{1,0}, {0,1}};

    cout << s1.findRotation(matrix, target);
    cout << endl;

    return 0;
}