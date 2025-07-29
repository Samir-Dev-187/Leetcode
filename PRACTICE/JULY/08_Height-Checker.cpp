#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
public:
    int heightChecker(vector<int>& heights) 
    {
        int count[101] = {0}; // Range is fixed

        for (int h : heights)
            count[h]++;

        int mismatch = 0, index = 0;
        for (int h = 1; h <= 100; ++h) {
            while (count[h]-- > 0) {
                if (heights[index] != h)
                    mismatch++;
                index++;
            }
        }

        return mismatch;
    }
};


int main()
{
    Solution s1;
    vector<int> nums = {1,2,3,4,5};

    cout << s1.heightChecker(nums);
    
    return 0;
}