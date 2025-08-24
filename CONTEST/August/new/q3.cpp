#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<int> maxValue(vector<int>& nums) 
        {
            int n = nums.size();
            vector<int> pref(n), minN(n), ans(n);

            pref[0] = nums[0];
            for (int i = 1; i < n; ++i) 
            {
                pref[i] = max(pref[i - 1], nums[i]);
            }

            minN[n - 1] = nums[n - 1];
            for (int i = n - 2; i >= 0; --i) 
            {
                minN[i] = min(minN[i + 1], nums[i]);
            }

            int start = 0;
            for (int i = 0; i < n - 1; ++i) 
            {
                if (pref[i] <= minN[i + 1]) 
                {
                    int maxVal = *max_element(nums.begin() + start, nums.begin() + i + 1);
                    for (int k = start; k <= i; ++k) 
                    {
                        ans[k] = maxVal;
                    }
                    start = i + 1;
                }
            }

            int maxVal = *max_element(nums.begin() + start, nums.end());
            for (int k = start; k < n; ++k) 
            {
                ans[k] = maxVal;
            }

            return ans;
        }
};

int main()
{
    Solution s1;
    vector <int> vec = {11, 18, 11};

    vector <int> ans = s1.maxValue(vec);
    for (int a : ans)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}