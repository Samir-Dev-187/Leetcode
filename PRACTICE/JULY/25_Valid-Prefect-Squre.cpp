#include<iostream>
using namespace std;

class Solution 
{
    public:
        bool isPerfectSquare(int num) 
        {
            if(num == 1) return true;
            if(num < 4) return false;

            int st =  1, end = num/2;
            while (st <= end)
            {
                int mid = st + (end-st)/2;
                long sq = 1L*mid*mid;

                if(num == sq)
                {
                    return true;
                }
                else if(sq > num)
                {
                    end = mid;
                }
                else
                {
                    st = mid+1;
                }

                if(st == mid) return false;
            }
            
            return false;
        }
};

int main()
{
    Solution s1;
    int n = 14;

    cout << s1.isPerfectSquare(n);
    cout << endl;
    
    return 0;
}