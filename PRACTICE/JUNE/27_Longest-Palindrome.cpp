#include<iostream>
#include<unordered_map>
using namespace std;

class Solution 
{
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char, int> freq;
        for(char ch : s) freq[ch]++;
        
        int count = 0;
        bool hasOdd = false;

        for(auto& p : freq)
        {
            count += (p.second / 2) * 2;
            if(p.second % 2 != 0) hasOdd = true;
        }

        if(hasOdd) count += 1;

        return count;
    }
};

int main()
{
    Solution s1;
    string s = "a";
    cout << s1.longestPalindrome(s);

    return 0;
}