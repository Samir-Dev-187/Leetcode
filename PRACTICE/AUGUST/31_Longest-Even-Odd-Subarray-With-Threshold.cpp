#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) 
    {
        int n = nums.size();
        int maxLen = 0;
        int currLen = 0;

        for (int i = 0; i < n; i++) 
        {
            if (nums[i] <= threshold) 
            {
                if (currLen == 0) 
                {
                    if (nums[i] % 2 == 0) 
                        currLen = 1;
                    else 
                        currLen = 0;
                } 
                else 
                {
                    if ((nums[i] % 2) != (nums[i-1] % 2)) 
                        currLen++;
                    else 
                    {
                        currLen = (nums[i] % 2 == 0 ? 1 : 0);
                    }
                }
            } 
            else 
            {
                currLen = 0;
            }

            maxLen = max(maxLen, currLen);
        }

        return maxLen;
    }
};


int main()
{
    Solution s1;
    vector<int> vec = {2,8};
    int th = 4;

    cout << s1.longestAlternatingSubarray(vec, th);
    cout << endl;

    return 0;
}