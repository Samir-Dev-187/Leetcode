#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool isPalindrome(int x) 
        {
            if (x < 0) return false;
            int original = x;
            long long digit = 0;
            
            while (x > 0)
            {
                int rem = x % 10;
                digit = digit * 10 + rem;
                x = x / 10;
            }

            return digit == original;
        }
};

int main()
{
    Solution s1;
    int x = 121;

    cout << s1.isPalindrome(x);
    cout << endl;

    return 0;
}