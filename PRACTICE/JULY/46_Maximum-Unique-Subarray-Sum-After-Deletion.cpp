#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int maxSum(vector<int>& nums) 
        {   
            sort(nums.begin(), nums.end());
            set<int> uniqueNums;
            for(int num : nums)
            {
                uniqueNums.insert(num);
            }

            int sum = 0;
            for(int num : uniqueNums)
            {
                sum += num;
            }

            return sum;
        }
};

int main() 
{
    Solution s1;
    vector<int> nums = {1,2,3,4,5};

    cout << s1.maxSum(nums);
    cout << endl;
    
    return 0;
}