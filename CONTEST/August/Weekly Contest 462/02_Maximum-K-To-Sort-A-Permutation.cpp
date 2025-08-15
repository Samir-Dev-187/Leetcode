#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        // Already sorted
        if (nums == sortedNums) return 0;

        int k_possible = -1; // all bits 1 initially
        for (int i = 0; i < n; i++) {
            if (nums[i] != sortedNums[i]) {
                if (k_possible == -1)
                    k_possible = nums[i]; 
                else
                    k_possible &= nums[i];
            }
        }

        return k_possible; // max k that can sort
    }
};

int main() 
{
    Solution s1;
    vector<int> vec = {0,3,2,1};

    cout << s1.sortPermutation(vec);
    cout << endl;

    return 0;
}