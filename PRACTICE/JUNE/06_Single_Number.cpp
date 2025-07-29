#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

// int singleNumber(vector<int>& nums)
// {
//     int single_number = 0;

//     for (int num : nums) 
//     {
//         single_number ^= num;
//     }

//     return single_number; 
// }

int singleNumber(vector<int>& nums)
{
    unordered_map<int, int> countNums;
    for(int num : nums)
    {
        countNums[num]++;
    }

    for(int num : nums)
    {
        if(countNums[num] == 1)
        {
            return num;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums={4,1,2,1,2};
    cout << singleNumber(nums);
}

