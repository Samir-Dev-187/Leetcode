#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int minimumDifference(vector<int>& nums, int k) 
        {
            int n = nums.size();
            
            if(n < 2) return 0;

            sort(nums.begin(), nums.end());

            int minDiff = INT_MAX;
            for(int i = 0; i <= n-k; ++i)
            {
                minDiff = min(minDiff, nums[i+k-1]-nums[i]);
            }

            return minDiff;
        }
};

int main()
{
    Solution s1;
    vector<int> vec = {9,4,1,7};
    int k = 2;

    cout << s1.minimumDifference(vec, k);
    cout << endl;

    return 0;
}