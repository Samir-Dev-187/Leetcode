#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
        {
            vector<int> ans;
            sort(nums.begin(), nums.end());

            vector<int> prefix;
            int sum = 0;
            for(int num : nums)
            {
                sum += num;
                prefix.push_back(sum);
            }

            for(int q : queries)
            {
                int count = upper_bound(prefix.begin(), prefix.end(), q) - prefix.begin();
                ans.push_back(count);
            }

            return ans;
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {4,5,2,1};
    vector<int> queries = {3,10,21};

    vector<int> ans = s1.answerQueries(nums, queries);
    for(int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}