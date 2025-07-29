#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution 
{
    public:
        int findKthPositive(vector<int>& arr, int k) 
        {
            int count = 0; 
            int current = 1; 
            int index = 0;

            while (true)
            {
                if (index < arr.size() && arr[index] == current)
                {
                    index++;
                }
                else
                {
                    count++;
                    if (count == k)
                        return current;
                }
                current++;
            }

            return 0;
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {2,3,4,7,11};
    int k = 5;

    cout << s1.findKthPositive(nums, k);

    return 0;
}