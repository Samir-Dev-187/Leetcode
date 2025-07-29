#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Solution 
{
    public:
        vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
        {            
            vector<vector<int>> result;
            sort(arr.begin(), arr.end());
            int minDiff = INT_MAX;

            for(int i = 0; i < arr.size() - 1; ++i)
            {
                int diff = arr[i+1] - arr[i];
                if(diff < minDiff) {
                    minDiff = diff;
                    result.clear();
                    result.push_back({arr[i], arr[i+1]});
                }
                else if(diff == minDiff) {
                    result.push_back({arr[i], arr[i+1]});
                }
            }

            return result;
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {4,2,1,3};

    vector<vector<int>> ans = s1.minimumAbsDifference(nums);
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