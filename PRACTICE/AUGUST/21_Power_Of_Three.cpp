#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool isPowerOfThree(int n) 
        {
            return n > 0 && 1162261467 % n == 0;
        }
};

int main()
{
    Solution s1;
    int n = 27;

    cout << s1.isPowerOfThree(n);
    cout << endl;

    return 0;
}