#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        vector<int> arrayRankTransform(vector<int>& arr) 
        {
            vector<int> result;
            vector<int> copyArr = arr;
            sort(copyArr.begin(), copyArr.end());

            unordered_map<int, int> storeIdx;
            int rank = 1;
            for (int val : copyArr) 
            {
                if (storeIdx.count(val) == 0) 
                {
                    storeIdx[val] = rank++;
                }
            }

           for (int val : arr) 
            {
                result.push_back(storeIdx[val]);
            }

           return result;
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {37,12,28,9,100,56,80,5,12};
    
    vector<int> ans = s1.arrayRankTransform(nums);
    for(int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}