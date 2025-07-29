#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution 
{
    public:
        int findLucky(vector<int>& arr) 
        {
            unordered_map<int, int> freq;
            for(int val : arr) freq[val]++;

            int ans = -1;
            for (auto it = freq.begin(); it != freq.end(); ++it)
            {
                int num = it->first;
                int count = it->second;

                if (num == count)
                    ans = max(ans, num);
            }

            return ans;
        }   
};

int main()
{
    Solution s1;
    vector<int> nums = {2,2,3,4};

    cout << s1.findLucky(nums);
    
    return 0;
}