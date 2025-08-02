#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int numSpecial(vector<vector<int>>& mat) 
        {
            int m = mat.size(); 
            int n = mat[0].size();
            int count = 0;
            for(int i=0; i<m; ++i)
            {
                for(int j=0; j<n; ++j)
                {
                    if(mat[i][j] == 1)
                    {
                        bool isTrue = true;
                        for(int c=0; c<n; ++c)
                        {
                            if(c == j) continue;
                            else if(mat[i][c] == 1)
                            {
                                isTrue = false;
                                break;
                            }
                        }
                        if(isTrue)
                        {
                            for(int r = 0; r<m; ++r)
                            {
                                if(r == i) continue;
                                else if(mat[r][j] == 1) 
                                {
                                    isTrue = false;
                                    break;
                                }
                            }
                        }
                        if(isTrue)
                        {
                            count++;
                        }
                    }
                }
            }

            return count;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{1,0,0}, {0,1,0}, {0,0,1}};

    cout << s1.numSpecial(matrix);
    cout << endl;

    return 0;
}