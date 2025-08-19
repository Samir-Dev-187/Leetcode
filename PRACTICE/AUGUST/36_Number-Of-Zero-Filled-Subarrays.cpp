#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        long long zeroFilledSubarray(vector<int>& nums) 
        {
            long long count = 0;
            long long result = 0;

            for(int i = 0; i < nums.size(); ++i)
            {
                if(nums[i] == 0)
                {
                    count++;
                    result += count;
                }
                else
                {
                    count = 0;
                }
            }

            return result;
        }
};

int main()
{
    Solution s1;
    vector<int> vec = {1,3,0,0,2,0,0,4};

    cout << s1.zeroFilledSubarray(vec);
    cout << endl;

    return 0;
}