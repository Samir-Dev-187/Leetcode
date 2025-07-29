#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;

        for (int num : arr) {
            if (seen.count(2 * num) || (num % 2 == 0 && seen.count(num / 2)))
                return true;
            seen.insert(num);
        }
        return false;
    }
};

int main()
{
    Solution s1;
    vector<int> nums = {10,2,5,3};

    cout << s1.checkIfExist(nums);
    
    return 0;
}