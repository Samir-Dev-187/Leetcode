#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int minimumRecolors(string blocks, int k) 
        {
            int n = blocks.length();
        
            int count = 0;
            for (int i = 0; i < k; i++) {
                if (blocks[i] == 'W') count++;
            }
            
            int minCount = count;
            
            for (int i = k; i < n; i++) {
                if (blocks[i] == 'W') count++;      
                if (blocks[i-k] == 'W') count--;   
                minCount = min(minCount, count);
            }
            
            return minCount;
        }
};

int main()
{
    Solution s1;
    string str = "WBWBBBW";
    int k = 2;

    cout << s1.minimumRecolors(str, k);
    cout << endl;

    return 0;
}