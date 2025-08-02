#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int minRemoval(vector<int>& nums, int k) 
        {
            sort(nums.begin(), nums.end());

            int n = nums.size();
            int minRemovals = n;

            int left = 0;
            for (int right = 0; right < n; ++right) 
            {
                while (nums[right] > (long long)nums[left] * k)
                {
                    left++;
                }
                
                int windowSize = right - left + 1;
                int toRemove = n - windowSize;
                minRemovals = min(minRemovals, toRemove);
            }

            return minRemovals;
        }
};

int main() 
{
    Solution s1;
    vector<int> nums = {1,34,23};
    int k = 2;

    cout << s1.minRemoval(nums, k);
    cout << endl;

    return 0;
}