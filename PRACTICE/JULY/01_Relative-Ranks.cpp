#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        vector<string> findRelativeRanks(vector<int>& score) 
        {
            vector<pair<int, int>> scoreWithIdx;
            int n = score.size()  ;
            for(int i=0; i<n; ++i)
            {
                scoreWithIdx.push_back({score[i], i});
            }

            sort(scoreWithIdx.rbegin(), scoreWithIdx.rend());

            vector<string> result(n);   
            for(int i=0; i<n; ++i)
            {
                int idx = scoreWithIdx[i].second;
                if(i == 0) result[idx] = "Gold Medal";
                else if(i == 1) result[idx] = "Silver Medal";
                else if(i == 2) result[idx] = "Bronze Medal";
                else result[idx] = to_string(i+1);
            }

            return result;
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {10,3,8,9,4};
    
    vector<string> result = s1.findRelativeRanks(nums);
    for(string val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}