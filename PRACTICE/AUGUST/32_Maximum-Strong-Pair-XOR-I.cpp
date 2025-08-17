#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int maximumStrongPairXor(vector<int>& nums) 
        {
            int n = nums.size();
            int maxXOR = 0;

            for(int i = 0; i < n; ++i)
            {
                for(int j = i; j < n; ++j)
                {
                    int x = nums[i];
                    int y = nums[j];
                    int xOr = 0;

                    if(abs(x-y) <= min(x, y))
                    {
                        xOr = x ^ y;
                    }
                    maxXOR = max(maxXOR, xOr);
                }
            }

            return maxXOR;
        }
};

int main()
{
    Solution s1;
    vector<int> vec = {1,2,3,4,5};

    cout << s1.maximumStrongPairXor(vec);
    cout << endl;

    return 0;
}