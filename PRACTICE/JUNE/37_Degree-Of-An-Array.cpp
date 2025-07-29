#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
    public:
        int findShortestSubArray(vector<int>& nums) 
        {
            unordered_map<int, int> freq;
        int degree = 0;

        for (int num : nums) {
            freq[num]++;
            degree = max(degree, freq[num]);
        }

        int minLength = nums.size();

        for (auto& entry : freq) {
            if (entry.second == degree) {
                int num = entry.first;

                int first = -1, last = -1;
                for (int i = 0; i < nums.size(); ++i) {
                    if (nums[i] == num) {
                        if (first == -1) first = i;
                        last = i;
                    }
                }

                int length = last - first + 1;
                minLength = min(minLength, length);
            }
        }

        return minLength;
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {1,2,2,3,1};

    cout << s1.findShortestSubArray(nums);

    return 0;
}