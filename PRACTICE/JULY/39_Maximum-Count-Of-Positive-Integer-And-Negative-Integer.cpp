#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        int maximumCount(vector<int>& nums) 
        {
            int countNeg = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
            int countPos = upper_bound(nums.begin(), nums.end(), 0) - nums.begin();

            return max(countNeg, (int)nums.size()-countPos);
        }
};

int main()
{
    Solution s1;

    vector<int> nums = {-2,-1,-1,1,2,3};
    cout << s1.maximumCount(nums);

    return 0;
}