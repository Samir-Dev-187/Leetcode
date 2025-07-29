#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length() != t.length()) return false;

        unordered_map<char,int> checkAnagram;
        for(int i=0; i<t.length(); ++i)
        {
            checkAnagram[t[i]]++;
        }

        for(int i=0; i<s.length(); ++i)
        {
            if(checkAnagram[s[i]] <= 0) return false;
            else checkAnagram[s[i]]--;
        }
        return true;
    }
};

int main()
{
    Solution s1;
    string s = "anagram", t = "nagaram";
    cout << s1.isAnagram(s, t);

    return 0;
}