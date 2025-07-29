#include<iostream>
#include<unordered_map>
using namespace std;

class Solution 
{
    public:
        int possibleStringCount(string word) 
        {
            int ans = 1;
            for(int i=0; i<word.length()-1; ++i)
            {
                if(word[i] == word[i+1])
                {
                    ans++;
                }
            }

            return ans;
        }
};

int main()
{
    Solution s1;
    string word = "abbcccc";

    cout << s1.possibleStringCount(word);
    
    return 0;
}