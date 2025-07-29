#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

class Solution 
{
public:
    int distributeCandies(vector<int>& candyType) 
    {
        unordered_set<int> storeType;
        for(int num : candyType) storeType.insert(num);

        int n = candyType.size()/2;
        int k = storeType.size();

        return min(n, k);
    }
};

int main()
{
    Solution s1;
    vector<int> nums = {6,6,6,6};
    cout << s1.distributeCandies(nums);
    
    return 0;
}