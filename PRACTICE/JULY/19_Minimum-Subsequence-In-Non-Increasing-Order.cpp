#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

class Solution 
{
    public:
        vector<int> minSubsequence(vector<int>& nums) 
        {
            vector<int> ans;
            int takenSum = 0;
            int totalSum = accumulate(nums.begin(), nums.end(), 0);
            sort(nums.rbegin(), nums.rend());
            for(int i=0; i<nums.size(); ++i)
            {
                takenSum += nums[i];
                ans.push_back(nums[i]);
                if(takenSum > totalSum - takenSum) break;
            }
            
            return ans;
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {1};

    vector<int> ans = s1.minSubsequence(nums);
    for(int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}