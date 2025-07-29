#include<iostream>
using namespace std;

bool isBadVersion(int version)
{
    int bad = 4;
    return version == bad;
}

class Solution 
{
public:
    int firstBadVersion(int n) 
    {
        int left = 1, right = n;

        while (left < right)
        {
            int mid = left + (right - left) / 2;
            
            if (isBadVersion(mid))
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};

int main()
{
    Solution s1;
    int num = 5;

    cout << s1.firstBadVersion(num);
    cout << endl;
    
    return 0;
}