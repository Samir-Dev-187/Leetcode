#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
        int search(vector<int>& nums, int target) 
        {
            long long st = 0, end = nums.size()-1;
            while (st <= end)
            {
                long long mid = st + (end-st)/2;
                if(nums[mid] == target)
                {
                    return mid;
                }
                else if(nums[mid] < target)
                {
                    st = mid + 1;
                }
                else if(nums[mid] > target)
                {
                    end = mid-1;
                }
            }

            return -1;            
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    cout << s1.search(nums, target);
    cout << endl;
    
    return 0;
}