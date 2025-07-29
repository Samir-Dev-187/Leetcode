#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        int specialArray(vector<int>& nums) 
        {
             sort(nums.begin(), nums.end()); 
            int n = nums.size();

            for(int x = 0; x <= n; ++x)  
            {
                int count = 0;
                for(int i = 0; i < n; ++i)
                {
                    if(nums[i] >= x)
                        count++;
                }
                if(count == x)
                    return x;  
            }
            return -1;
        }
};

int main()
{
    Solution s1;
    vector<int> arr = {0,4,3,0,4};
    cout << s1.specialArray(arr);
    cout << endl;

    return 0;
}