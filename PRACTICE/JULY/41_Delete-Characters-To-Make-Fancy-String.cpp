#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
        string makeFancyString(string s) 
        {
            if(s.length() == 1) return s;
            if(s.length() == 2 && s[0] == s[1])return s;
            
            string ans = "";
            ans += s[0];
            for(int i=1; i<s.length()-1; ++i)
            {
                if(s[i-1] != s[i] || s[i] != s[i+1])
                {
                    ans += s[i];
                }
            }
            ans += s[s.length()-1];

            return ans;
        }
};

int main()
{
    Solution s1;
    string s = "leeetcode";

    string ans = s1.makeFancyString(s);
    for(char ch : ans)
    {
        cout << ch;
    }
    cout << endl;

    return 0;
}