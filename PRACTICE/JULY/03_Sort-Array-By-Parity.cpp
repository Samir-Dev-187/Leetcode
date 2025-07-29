#include<iostream>
#include<vector>
using namespace std;

    class Solution 
    {
        public:
            vector<int> sortArrayByParity(vector<int>& nums) 
            {
                int j=0;
                for(int i=0; i<nums.size(); ++i)
                {
                    if(nums[i]%2 == 0)
                    {
                        swap(nums[i], nums[j]);
                        j++;
                    }
                }   

                return nums;
            }
    };

int main()
{
    Solution s1;
    vector<int> nums = {0};

    s1.sortArrayByParity(nums);
    for(int val : nums)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}