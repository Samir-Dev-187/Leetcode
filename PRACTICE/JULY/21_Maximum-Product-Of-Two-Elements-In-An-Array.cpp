#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        int maxProduct(vector<int>& nums) 
        {
            sort(nums.rbegin(), nums.rend());

            return ((nums[0]-1) * (nums[1]-1));
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {1,5,4,5};

    cout << s1.maxProduct(nums);
    
    return 0;
}