#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<vector<int>> imageSmoother(vector<vector<int>>& img) 
        {
            int m = img.size();
            int n = img[0].size();
            vector<vector<int>> result(m, vector<int>(n, 0));

            // har cell pe loop
            for(int i = 0; i < m; ++i) {
                for(int j = 0; j < n; ++j) {
                    int sum = 0;
                    int count = 0;

                    // 3x3 area check karna hai (i-1 to i+1, j-1 to j+1)
                    for(int dx = -1; dx <= 1; ++dx) {
                        for(int dy = -1; dy <= 1; ++dy) {
                            int ni = i + dx;
                            int nj = j + dy;

                            // check ki wo neighbor cell valid hai ya nahi
                            if(ni >= 0 && ni < m && nj >= 0 && nj < n) {
                                sum += img[ni][nj];
                                count++;
                            }
                        }
                    }

                    result[i][j] = sum / count; // integer division = floor
                }
            }

            return result;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> img = {{1,1,1}, {1,0,1}, {1,1,1}};
    vector<vector<int>> ans = s1.imageSmoother(img);
    for(int i=0; i<ans.size(); ++i)
    {
        for(int j=0; j<ans[i].size(); ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}