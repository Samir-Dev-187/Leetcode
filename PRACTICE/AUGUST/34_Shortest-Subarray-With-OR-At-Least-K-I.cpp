#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int minimumSubarrayLength(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int minLen = INT_MAX;

        for(int i = 0; i < n; ++i)
        {
            int currOr = 0;
            for(int j = i; j < n; ++j)
            {
                currOr |= nums[j];  
                if(currOr >= k)
                {
                    minLen = min(minLen, j - i + 1); 
                    break;
                }
            }
        }

        return (minLen == INT_MAX ? -1 : minLen);
    }
};

int main()
{
    Solution s1;
    vector<int> vec = {2,1,8};
    int k = 10;

    cout << s1.minimumSubarrayLength(vec, k);
    cout << endl;

    return 0;
}