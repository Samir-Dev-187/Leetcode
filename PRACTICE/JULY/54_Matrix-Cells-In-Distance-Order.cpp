#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) 
        {
            vector<vector<int>> result;
            
            for(int r=0; r<rows; ++r)
            {
                for(int c=0; c<cols; ++c)
                {
                    result.push_back({r,c});
                }
            }   

            sort(result.begin(), result.end(), [&](vector<int>& a, vector<int>& b)
            {
                int d1 = abs(a[0] - rCenter) + abs(a[1] - cCenter);
                int d2 = abs(b[0] - rCenter) + abs(b[1] - cCenter);
                return d1 < d2;
            });

            return result;
        }
};

int main() 
{
    Solution s1;
    int rows = 2, cols = 3, rCenter = 1, cCenter = 2;
    
    vector<vector<int>> ans = s1.allCellsDistOrder(rows, cols, rCenter, cCenter);
    for(int i=0; i<ans.size(); ++i)
    {
        for(int j=0; j<ans[0].size(); ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}