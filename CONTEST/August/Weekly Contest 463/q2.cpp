#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) 
        {
            int ans = 0;   
            const int MOD = (int)1e9 + 7;

            for(const auto& q : queries)
            {
                int idx = q[0];
                while(idx <= q[1])
                {
                    nums[idx] = (1LL * nums[idx] * q[3]) % MOD;   
                    idx += q[2];
                }
            }

            for(int num : nums)
            {
                ans ^= num;
            }

            return ans;
        }
};

int main()
{
    Solution s1;


    return 0;
}