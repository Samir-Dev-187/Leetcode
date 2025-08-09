#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool isPowerOfTwo(int n) 
        {
            if (n <= 0) return false;

            while (n > 1)
            {
                int rem = n % 2;
                n = n / 2;

                if(rem != 0) return false;
            }
            
            return true;
        }
};

int main() 
{
    Solution s1;

    int n = 1;

    cout << s1.isPowerOfTwo(n);
    cout << endl;

    return 0;
}