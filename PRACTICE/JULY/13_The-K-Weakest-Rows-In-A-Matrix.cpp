#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
        {   
            vector<pair<int, int>> strengthIndex;

            for(int i=0; i<mat.size(); ++i)
            {
                int sol = 0;
                while (sol<mat[i].size() && mat[i][sol] == 1)
                {
                    sol++;
                }
                strengthIndex.push_back({sol, i});
            }

            sort(strengthIndex.begin(), strengthIndex.end());

            vector<int> result;
            for(int i=0; i<k; ++i)
            {
                result.push_back(strengthIndex[i].second);
            }

            return result;
        }
};

int main()
{
    Solution s1;
    vector<vector<int>> mat = {{1,1,0,0,0}, {1,1,1,1,0}, {1,0,0,0,0}, {1,1,0,0,0}, {1,1,1,1,1}};
    int k = 3;

    vector<int> ans = s1.kWeakestRows(mat, k);
    for(int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}