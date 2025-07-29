#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int, int> checkDupN;

        for(int i=0; i<nums.size(); ++i)
        {
            if(checkDupN.count(nums[i]) && i-checkDupN[nums[i]]<=k) return true;
            else checkDupN[nums[i]] = i;
        }
        return false;
    }
};

int main()
{
    Solution s1;
    vector<int> nums = {1,2,3,1,2,3};
    int k=2;
    cout << s1.containsNearbyDuplicate(nums, k) << endl;

    return 0;
}