#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int findLHS(vector<int>& nums) 
        {
            unordered_map<int, int> freq;
            for(int num : nums)
            {
                freq[num]++;
            }

            int longest = 0;

            for(auto& [num, count] : freq)
            {
                if (freq.count(num + 1))
                {
                    longest = max(longest, count + freq[num + 1]);
                }
            }

            return longest;
        }
};

int main()
{
    Solution s1;
    vector <int> vec = {1,3,2,2,5,2,3,7};

    cout << s1.findLHS(vec);
    cout << endl;

    return 0;
}