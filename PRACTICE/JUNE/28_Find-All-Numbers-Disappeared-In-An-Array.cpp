#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;

class Solution 
{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        if(nums.size() == 1) return;

        vector<int> dNum;

        unordered_map<int, int> storeNums;
        for(int num : nums) storeNums[num]++;
        vector<int> storeRange;
        for(int i=1; i<=nums.size(); i++) storeRange.push_back(i);

        for(int num : storeRange)
        {
            if(!storeNums.count(num))
            {
                dNum.push_back(num);
            }
        }

        return dNum;
    }
};

int main()
{
    Solution s1;
    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> ans = s1.findDisappearedNumbers(nums);

    for(int num : ans)
    {
        cout << num << " ";
    }

    return 0;
}