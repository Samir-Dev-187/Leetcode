#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool isPrime(int num)
        {
            if (num <= 1) return false;
            if (num == 2 || num == 3) return true;
            if (num % 2 == 0 || num % 3 == 0) return false;

            for(int i = 5; i * i <= num; i += 6)
            {
                if (num % i == 0 || num % (i + 2) == 0)
                {
                    return false;
                }
            }

            return true;
        }

        int diagonalPrime(vector<vector<int>>& nums) 
        {
            int n = nums.size();
            int maxNum = 0;

            for(int i = 0; i < n; ++i)
            {
                if (isPrime(nums[i][i]))
                {
                    maxNum = max(maxNum, nums[i][i]);
                }

                if (isPrime(nums[i][n - 1 - i]))
                {
                    maxNum = max(maxNum, nums[i][n - 1 - i]);
                }
            }

            return maxNum;
        }
};

int main() 
{
    Solution s1;
    vector<vector<int>> matrix = {{1,2,3}, {5,6,7}, {9,10,11}};

    cout << s1.diagonalPrime(matrix);
    cout << endl;

    return 0;
}