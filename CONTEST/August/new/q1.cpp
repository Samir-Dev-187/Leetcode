#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int gcdOfOddEvenSums(int n) 
        {
            int sumOdd = 0, sumEven = 0;

            for (int i = 1; i <= 2*n; ++i)
            {
                if (i % 2 == 0)
                {
                    sumEven += i;
                }
                else
                {
                    sumOdd += i;
                }
            }

            return gcd(sumOdd, sumEven);
        }
};

int main()
{
    Solution s1;
    int n = 5;

    cout << s1.gcdOfOddEvenSums(n);
    cout << endl;

    return 0;
}