#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int strStr(string haystack, string needle) 
        {
            if (needle.size() > haystack.size()) return -1;
            
            for (int i = 0; i < haystack.size()-needle.size()+1; ++i)
            {
                string s = "";
                for (int j = i; j < needle.size()+i; ++j)
                {
                    s.push_back(haystack[j]);
                }

                if (s == needle) return i;
            }

            return -1;
        }
};

int main()
{
    Solution s1;
    string str1 = "sadbutsad";
    string str2 = "sad";

    cout << s1.strStr(str1, str2);
    cout << endl;

    return 0;
}