#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int maximumWealth(vector<vector<int>>& accounts) 
        {
            int m = accounts.size();
            int n = accounts[0].size();

            int maxWealth = INT_MIN;
            for(int i=0; i<m; ++i)
            {
                int sum = 0;
                for(int j=0; j<n; ++j)
                {
                    sum += accounts[i][j];
                }
                maxWealth = max(maxWealth, sum);
            }

            return maxWealth;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{1,2,3}, {3,2,1}};

    cout << s1.maximumWealth(matrix);
    cout << endl;
    
    return 0;
}