#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
        {
            unordered_map<int, int> storeNum;
            vector<int> copyNum = nums;
            sort(copyNum.begin(), copyNum.end());

            for(int i=0; i<copyNum.size(); ++i)
            {
                if(storeNum.count(copyNum[i]) == 0)
                {
                    storeNum[copyNum[i]] = i;
                }
            }
            
            for(int i=0; i<nums.size(); ++i)
            {
                nums[i] = storeNum[nums[i]];
            }

            return nums;
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {8,1,2,2,3};

    s1.smallerNumbersThanCurrent(nums);
    for(int val : nums)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}