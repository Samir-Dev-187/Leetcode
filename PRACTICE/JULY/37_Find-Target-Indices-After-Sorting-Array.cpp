#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        vector<int> targetIndices(vector<int>& nums, int target) 
        {
            sort(nums.begin(), nums.end());
            vector<int> res;
            for(int i=0; i<nums.size(); ++i)
            {
                if(nums[i] == target)
                {
                    res.push_back(i);
                }
                if(nums[i] > target)
                {
                    return res;
                }
            }

            return res;
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {1,2,5,2,3};
    int target = 2;

    vector<int> ans = s1.targetIndices(nums, target);
    for(int a : ans)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}