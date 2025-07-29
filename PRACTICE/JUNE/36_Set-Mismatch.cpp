#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        long long expectedSum = (long long)n * (n + 1) / 2;
        long long expectedSquareSum = (long long)n * (n + 1) * (2 * n + 1) / 6;
        
        long long actualSum = 0, actualSquareSum = 0;

        for (int num : nums) {
            actualSum += num;
            actualSquareSum += (long long)num * num;
        }

        long long diff = actualSum - expectedSum;
        long long squareDiff = actualSquareSum - expectedSquareSum; 

        long long sum = squareDiff / diff; 

        int x = (diff + sum) / 2;  
        int y = x - diff;       

        return {x, y};
    }
};

int main() {
    Solution s1;
    vector<int> nums = {1, 2, 2, 4};
    vector<int> ans = s1.findErrorNums(nums);
    for (int a : ans) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
