#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int minSensors(int n, int m, int k) 
        {
            int blockSize = 2 * k + 1;
            int sensorRow = (n + blockSize - 1) / blockSize;
            int sensorCol = (m + blockSize - 1) / blockSize;

            return sensorRow * sensorCol;
        }
};

int main()
{
    Solution s1;
    int n = 5, m = 5, k = 1;

    cout << s1.minSensors(n, m, k);
    cout << endl;

    return 0;
}