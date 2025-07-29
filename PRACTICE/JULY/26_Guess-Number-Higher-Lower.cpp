#include<iostream>
using namespace std;

int guess(int num)
{
    int pick = 6;
    if(num == pick) return 0;
    else if(num > pick) return -1;
    else if(num < pick) return 1;
}

class Solution 
{
    public:
        int guessNumber(int n) 
        {
            int st = 1, end = n;
            while (st <= end)
            {
                int mid = st + (end-st)/2;

                int r = guess(mid);
                if(r == 0)
                {
                    return mid;
                }
                else if(r == -1)
                {
                    end = mid;
                }
                else if(r == 1)
                {
                    st = mid + 1;
                }
            }
            
        }
};

int main()
{
    Solution s1;
    int num = 10;

    cout << s1.guessNumber(num);
    cout << endl;
    
    return 0;
}