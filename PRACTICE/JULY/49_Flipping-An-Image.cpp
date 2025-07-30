#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
        {
            int n = image.size();
            int m = image[0].size();            
            for(int i=0; i<n; ++i)
            {
                reverse(image[i].begin(), image[i].end());
            }

            for(int i=0; i<n; ++i)
            {
                for(int j=0; j<m; ++j)
                {
                    if(image[i][j] == 0)
                    {
                        image[i][j] = 1;
                    }
                    else
                    {
                        image[i][j] = 0;
                    }
                }
            }

            return image;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> mat = {{1,1,0}, {1,0,1}, {0,0,0}};
    s1.flipAndInvertImage(mat);

    for(int i=0; i<mat.size(); ++i)
    {
        for(int j=0; j<mat[0].size(); ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}