#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int sortPermutation(vector<int>& nums) 
    {
        int maxK = INT_MIN;
        int k = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            vector<int> newNum = nums; 
            if((nums[i] & nums[nums[i]]) == k)
            {
                swap(nums[i], nums[nums[i]]);
            }
            if(is_sorted(newNum.begin(), newNum.end()))
            {
                maxK = k;
            }
            k++;
        }

        return maxK != INT_MIN ? maxK : 0;
    }
};


int main() 
{
    
    return 0;
}