#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        vector<int> sortedSquares(vector<int>& nums)
        {
            for(int i=0; i<nums.size(); ++i)
            {
                nums[i] = nums[i]*nums[i];
            }

            sort(nums.begin(), nums.end());

            return nums;
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {-7,-3,2,3,11};

    s1.sortedSquares(nums);
    for(int val : nums)
    {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}