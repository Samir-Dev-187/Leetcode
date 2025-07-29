#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution 
{
    public:
        int maximumUniqueSubarray(vector<int>& nums) 
        {
            set<int> storeUnique;
            for(int num : nums)
            {
                storeUnique.insert(num);
            }
            int maxScore;
            for(int num : storeUnique)
            {
                maxScore += num;
            }

            return maxScore;    
        }
};

int main()
{
    Solution s1;
    vector<int> arr = {4,2,4,5,6};

    cout << s1.maximumUniqueSubarray(arr);
    cout << endl;

    return 0;   
}