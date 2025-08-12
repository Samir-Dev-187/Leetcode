#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool containsNearbyDuplicate(vector<int>& nums, int k) 
        {
            unordered_set<int> window;
            for (int i = 0; i < nums.size(); ++i) 
            {
                if (window.count(nums[i])) return true;
                
                window.insert(nums[i]); 

                if (window.size() > k) 
                {
                    window.erase(nums[i - k]);
                }
            }
            
            return false;
        }
};

int main()
{
    Solution s1;
    vector<int> vec = {1,2,1};
    int k = 2;

    cout << s1.containsNearbyDuplicate(vec, k);
    cout << endl;

    return 0;
}