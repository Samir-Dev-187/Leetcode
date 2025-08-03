#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxBalancedShipments(vector<int>& weight) 
        {
            int left = 0, right = 0;
            int count = 0;
            int max_ = INT_MIN;

            while(right < weight.size())
            {
                max_ = max(max_, weight[right]);
                if(weight[right] < max_ && right > left)
                {
                    count++;
                    left = right + 1;
                    right = left;
                    max_ = INT_MIN;
                }
                else
                {
                    right++;
                }
            }

            return count;
        }
};

int main() 
{
    Solution s1;
    vector<int> nums = {4,4};

    cout << s1.maxBalancedShipments(nums);
    cout << endl;

    return 0;
}