#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums, int n) 
{
    int freq=0, ans = 0;

    for(int i=0; i<n; i++)
    {
        if(freq == 0)
        {
            ans = nums[i];
        }
        if(ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    int count = 0;
    for(int val : nums)
    {
        if(val == ans)
        {
            count++;
        }
    }

    if(count > n/2)
    {
        return ans;
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> nums = {3,3,4};
    int n = nums.size();
    int val = majorityElement(nums,n);
    cout << val << endl;

    return 0;
}