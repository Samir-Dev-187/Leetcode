#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool checkValid(vector<vector<int>>& matrix) 
        {
            int n = matrix.size();
            unordered_map<int,int> storeNum;
            for(int i=1; i<=n; ++i)
            {
                storeNum[i]++;
            }
            unordered_map<int,int> copySN = storeNum;

            for(int i=0; i<n; ++i)
            {
                for(int j=0; j<n; ++j)
                {
                    if(storeNum.count(matrix[i][j]) == 1 && storeNum[matrix[i][j]] > 0)
                    {
                        storeNum[matrix[i][j]]--;
                    }
                    else return false;
                }
                storeNum = copySN;
            }

            for(int i=0; i<n; ++i)
            {
                for(int j=0; j<n; ++j)
                {
                    if(storeNum.count(matrix[j][i]) == 1 && storeNum[matrix[j][i]] > 0)
                    {
                        storeNum[matrix[j][i]]--;
                    }
                    else return false;
                }
                storeNum = copySN;
            }

            return true;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{1,2,2}, {3,1,2}, {2,3,1}};

    cout << s1.checkValid(matrix);
    cout << endl;

    return 0;
}