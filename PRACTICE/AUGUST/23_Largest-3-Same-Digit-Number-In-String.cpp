#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        string largestGoodInteger(string num) 
        {
            string ans;
            int maxDigit = INT_MIN;

            for(int i = 0; i < num.size()-2; ++i)
            {
                string sub = num.substr(i, 3);
                if(sub[0] == sub[1] && sub[1] == sub[2] && int(sub[0]) > maxDigit)
                {
                    ans = sub;
                    maxDigit = int(sub[0]);
                }
            }

            return ans;
        }
};

int main()
{
    Solution s1;
    string num = "74444";

    cout << s1.largestGoodInteger(num);
    cout << endl;

    return 0;
}