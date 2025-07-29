#include<iostream>
#include<unordered_map>
using namespace std;

class Solution 
{
    public:
        bool canConstruct(string ransomNote, string magazine) 
        {
            unordered_map<char, int> checkMag;
            for(int i=0; i<magazine.length(); ++i)
            {
                checkMag[magazine[i]]++;
            }

            for(int i=0; i<ransomNote.length(); ++i)
            {
                if(checkMag[ransomNote[i]] <= 0) return false;
                else checkMag[ransomNote[i]]--; 
            }
            return true;
        }
};

int main()
{
    Solution s1;
    string ransomNote = "a", magazine = "b";

    cout << s1.canConstruct(ransomNote, magazine);

    return 0;
}