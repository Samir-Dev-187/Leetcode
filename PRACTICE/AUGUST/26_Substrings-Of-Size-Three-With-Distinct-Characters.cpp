#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int countGoodSubstrings(string s) 
        {   
            if(s.length() < 3) return 0;

            int count = 0;
            for(int i = 0; i < s.length()-2; ++i)
            {
                string sub = s.substr(i, 3);

                if(sub[0] != sub[1] && sub[1] != sub[2] && sub[2] != sub[0]) count++;
            }

            return count;
        }
};

int main()
{
    Solution s1;
    string s = "x";

    cout << s1.countGoodSubstrings(s);
    cout << endl;

    return 0;
}