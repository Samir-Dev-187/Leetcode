#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isTrionic(vector<int>& nums) 
        {
            int p = 0, q = 0;
            for(int i=0; i<nums.size()-1; ++i) // find p
            {
                if(nums[i] < nums[i+1])
                {
                    p++;
                }
                else
                {
                    break;
                }
            }
            q = p;
            for(int i=p; i<nums.size()-1; ++i) // find q
            {
                if(nums[i] > nums[i+1])
                {
                    q++;
                }
                else
                {
                    break;
                }
            }

            bool istrue = false;
            for(int i=q; i<nums.size()-1; ++i) // check q to n-1
            {
                if(nums[i] >= nums[i+1])
                {
                    istrue = false;
                    break;
                }
                else
                {
                    istrue = true;
                }
            }
            
            return p > 0 && q > p && istrue;
        }
};
int main() 
{
    Solution s1;
    vector<int> nums = {6,8,2,5,9};

    cout << s1.isTrionic(nums);
    cout << endl;

    return 0;
}