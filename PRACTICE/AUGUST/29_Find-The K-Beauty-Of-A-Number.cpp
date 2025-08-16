#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int divisorSubstrings(int num, int k) 
        {
            int count = 0;
            string s = to_string(num);

            for(int i = 0; i <= s.length()-k; ++i)
            {
                string sub = s.substr(i, k);

                if(stoi(sub) != 0 && num % stoi(sub) == 0) count++;
            }

            return count;
        }
};

int main()
{
    Solution s1;
    int num = 430043, k = 2;

    cout << s1.divisorSubstrings(num, k);
    cout << endl;

    return 0;
}