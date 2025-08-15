#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestNiceSubstring(string s) {
        if (s.size() < 2) return "";

        unordered_set<char> st(s.begin(), s.end());

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (st.count(tolower(c)) && st.count(toupper(c))) continue;

            string left = longestNiceSubstring(s.substr(0, i));
            string right = longestNiceSubstring(s.substr(i + 1));

            return (left.size() >= right.size()) ? left : right;
        }
        return s; // poori string nice hai
    }
};

int main()
{
    Solution s1;
    string s = "YazaAay";

    cout << s1.longestNiceSubstring(s);
    cout << endl;

    return 0;
}