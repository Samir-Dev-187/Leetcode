#include<iostream>
#include<math.h>
using namespace std;

class Solution 
{
    public:
        int mySqrt(int x) 
        {
            if(x < 2) return x;

            int left = 1, right = x / 2;
            int ans = 0;

            while(left <= right)
            {
                int mid = left + (right - left)/2;
                long sq = 1L * mid * mid;

                if(sq <= x)
                {
                    ans = mid;
                    left = mid + 1; 
                }
                else
                {
                    right = mid - 1;
                }
            }

            return ans;
        }
};

int main()
{
    Solution s1;
    int x = 36;

    cout << s1.mySqrt(x);
    
    return 0;
}