#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int deleteGreatestValue(vector<vector<int>>& grid) 
        {
            int sum = 0;
            while(grid[0].size() > 0)
            {
                int max_ = INT_MIN;

                for(int i = 0; i < grid.size(); ++i)
                {
                    int rowMax = INT_MIN;
                    int colIdx = -1;

                    for(int j = 0; j < grid[i].size(); ++j)
                    {   
                        if(grid[i][j] > rowMax)
                        {
                            rowMax = grid[i][j];
                            colIdx = j;
                        }
                    }
                    grid[i].erase(grid[i].begin() + colIdx);
                    max_ = max(max_, rowMax);
                }

                sum += max_;
            }

            return sum;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{1,2,4}, {3,3,1}};

    cout <<s1.deleteGreatestValue(matrix);
    cout << endl;

    return 0;
}