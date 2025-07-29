#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution 
{
public:
    int dominantIndex(vector<int>& nums) 
    {
        int maxNum = INT_MIN, maxIdx;
        for(int i=0; i<nums.size(); ++i)
        {
            if(nums[i] > maxNum)
            {
                maxNum = nums[i];
                maxIdx = i; 
            }
        }

        for(int i=0; i<nums.size(); ++i)
        {
            if(maxIdx == i) continue;

            if(maxNum < 2*nums[i]) return -1;
        }
        
        return maxIdx;
    }
};

int main()
{
    Solution s1;
    vector<int> nums = {1,2,3,4};

    cout << s1.dominantIndex(nums);
    
    return 0;
}