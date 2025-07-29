#include<iostream>
using namespace std;

class Solution 
{
public:
    int arrangeCoins(int n) 
    {
        int currentRow = 1;
        while (n >= currentRow)
        {
            n -= currentRow;
            currentRow++;
        }
        return currentRow - 1;
    }
};

int main()
{
    Solution s1;
    int num = 3;

    cout << s1.arrangeCoins(num);
    cout << endl;
    
    return 0;
}