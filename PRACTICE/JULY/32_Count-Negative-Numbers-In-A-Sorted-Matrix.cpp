#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
        int countNegatives(vector<vector<int>>& grid) 
        {
            int m =grid.size();
            int n =grid[0].size();
            int count = 0;
            int i = 0, j = n-1;

            while (i < m && j >= 0)
            {
                if(grid[i][j] < 0)
                {
                    count += (m-i);
                    j--;
                }
                else
                {
                    i++;
                }
            }
            
            return count;
        }
};

int main()
{
    Solution s1;
    vector<vector<int>> nums = {{4,3,2,-1}, {3,2,1,-1}, {1,1,-1,-2}, {-1,-1,-2,-3}};

    cout << s1.countNegatives(nums);
    cout << endl;
    
    return 0;
}