#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int numberOfAlternatingGroups(vector<int>& colors) 
    {
        int n = colors.size();
        int count = 0;

        for(int i = 0; i < n; ++i) 
        {
            int a = colors[i];
            int b = colors[(i+1) % n];
            int c = colors[(i+2) % n];

            if(a == c && a != b) count++;
        }
        
        return count;
    }
};

int main()
{
    Solution s1;
    vector<int> vec = {0,1,0,0,1};

    cout << s1.numberOfAlternatingGroups(vec);
    cout << endl;

    return 0;
}