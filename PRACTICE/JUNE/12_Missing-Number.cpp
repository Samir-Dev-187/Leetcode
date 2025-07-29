#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) 
{
    int missing = 0;
    int n = nums.size();

    // XOR all numbers from 0 to n
    for (int i = 0; i <= n; i++)
        missing ^= i;

    // XOR all elements in the array
    for (int num : nums)
        missing ^= num;

    return missing;
}

int main()
{
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    cout << missingNumber(nums);
}