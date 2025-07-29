#include<iostream>
#include<unordered_map>
using namespace std;

class Solution 
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<int, int> checkFreq;
        for(char ch : s)
        {
            checkFreq[ch]++;
        }

        for(int i=0; i<s.length(); i++)
        {
            if(checkFreq[s[i]] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    Solution  s1;
    string s = "loveleetcode";
    cout << s1.firstUniqChar(s);

    return 0;
}