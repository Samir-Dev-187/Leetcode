#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int longestSubarray(vector<int>& nums) 
        {
            int left = 0, zeroCount = 0, maxLen = 0;

            for (int right = 0; right < nums.size(); right++) 
            {
                if (nums[right] == 0) 
                    zeroCount++;

                while (zeroCount > 1) 
                {
                    if (nums[left] == 0) 
                        zeroCount--;
                    left++;
                }
                maxLen = max(maxLen, right - left);
            }

            return maxLen;
        }
};

int main()
{
    Solution s1;
    vector<int> vec = {1,1,0,1};

    cout << s1.longestSubarray(vec);
    cout << endl;

    return 0;
}