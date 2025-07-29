#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) 
// {
//     vector<int> ans;
//     for(int i=0; i<nums.size(); i++)
//     {
//         for(int j=1; j<nums.size(); j++)
//         {
//             if(nums[i]+nums[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // num → index
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.count(complement)) {
            return {mp[complement], i};
        }
        mp[nums[i]] = i;
    }
    return {-1, -1};
}


int main()
{
    vector<int> nums = {2,7,11,17};
    int target = 24;

    vector<int> ans = twoSum(nums, target);
    cout << ans[0] <<  " " << ans[1];
}