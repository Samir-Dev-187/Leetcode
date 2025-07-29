#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
        int maximumLength(vector<int>& nums) 
        {
            vector<int> copyNums;
            for(int i=1; i<nums.size(); ++i)
            {
                if(nums[i] != nums[i-1])
                {
                    copyNums.push_back(nums[i-1]);
                }

                if(i == nums.size()-1 && nums[i] != nums[i-1]) copyNums.push_back(nums[i]);
            }

            if(copyNums.size() < 3) return copyNums.size();
            
            for(int i=0; i<copyNums.size()-2; ++i)
            {
                if(((copyNums[i] + copyNums[i+1]) % 2) != ((copyNums[i+1] + copyNums[i+2]) % 2))
                {
                    return i;
                }
            }

            return copyNums.size();
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {9,9};
    cout << s1.maximumLength(nums);

    return 0;
}