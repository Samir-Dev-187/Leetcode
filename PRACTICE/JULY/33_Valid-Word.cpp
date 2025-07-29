#include<iostream>
#include<vector>
#include<unordered_map>
#include<cctype>
using namespace std;

class Solution 
{
    public:
        bool isValid(string word) 
        {
            bool isRight = true;

            // rule 1: 
            if(word.size() < 3)
            {
                isRight = false;
                return isRight;
            }
            
            // rule 2:
            for(char ch : word)
            {
                if(!isalnum(ch))
                {
                    isRight = false;
                    return isRight;
                }
            }

            unordered_map<char, int> alphabets;
            for (int i = 1; i < 27; ++i)
            {
                if(char(64+i) == 'A'|| char(64+i) == 'E'|| char(64+i) == 'I'|| char(64+i) == 'O'|| char(64+i) == 'U')
                {
                    alphabets[char(64+i)] = 2;
                }
                else
                {
                    alphabets[char(64+i)] = 1;
                }
            }

            // rule 3 & 4:
            bool isVowel = false;
            bool isCons = false;
            for(char ch : word)
            {
                if(alphabets[toupper(ch)] == 2 && isalpha(ch))
                {
                    isVowel = true;
                }
                else if(alphabets[toupper(ch)] == 1 && isalpha(ch))
                {
                    isCons = true;
                }

                if(isVowel && isCons)   
                {
                    isRight = true;
                    return isRight;
                }
            }

            return false;
        }
};

int main()
{
    Solution s1;
    string word = "3pp";
    
    cout << s1.isValid(word);
    
    return 0;
}