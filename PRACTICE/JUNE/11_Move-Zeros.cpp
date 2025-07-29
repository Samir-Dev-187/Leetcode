#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeroes(vector<int>& nums) 
{
    for(int i=0; i<nums.size()-1; i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i] == 0)
            {
                swap(nums[i], nums[j]);
            }
        }
    }
    return nums;
}

int main()
{
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);

    for(int val : nums)
    {
        cout << val << " ";
    }
    
    return 0;
}