#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool reorderedPowerOf2(int n) 
        {
            if(n <= 0) return false;
            
            string target = to_string(n);
            sort(target.begin(), target.end());

            for(int i = 0; i < 31; ++i)
            {
                int power = 1 << i;
                string p = to_string(power);
                sort(p.begin(), p.end());

                if(p == target) return true;
            }

            return false;
        }
};

int main() 
{
    Solution s1;
    int n = 1;

    cout << s1.reorderedPowerOf2(n);
    cout << endl;

    return 0;
}