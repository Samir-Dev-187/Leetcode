#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool isPowerOfFour(int n) 
        {
            if (n == 1 || n == 4) return true;
            if(n < 16 ) return false;
            while (n > 1)
            {
                int rem = n % 4;
                n = n / 4;
                if(rem != 0) return false;
            }
            
            return true;
        }
};

int main()
{
    Solution s1;
    int n = 16;

    cout << s1.isPowerOfFour(n);
    cout << endl;

    return 0;
}