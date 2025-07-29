#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution 
{
    public:
        int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) freq[num]++;  // Step 1: Build freq map

        int maxLen = 0;
        for (auto it : freq) 
        {
            int key = it.first;
            int val = it.second;

            if (freq.count(key + 1)) 
            {
                maxLen = max(maxLen, val + freq[key + 1]);
            }
        }

        return maxLen;
    }

};

int main()
{
    Solution s1;
    vector<int> nums = {0,3,1,3,3,3,0,1,0,2,0,3,1,3,-3,2,0,3,1,2,2,-3,2,2,3,3};

    cout << s1.findLHS(nums);
    
    return 0;
}