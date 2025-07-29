#include<iostream>
#include<vector>
#include<unordered_map>
#include<sstream>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {

        unordered_map<char,string> check_p_s;
        unordered_map<string, char> check_s_p;
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word)  
        {
            words.push_back(word);
        }
        
        if(pattern.length() != words.size()) return false;

        for(int i=0; i<pattern.length(); ++i)    
        {
            string prevSubS = words[i];
            char prevP = pattern[i];

            if(check_p_s.count(pattern[i]))
            {
                if(check_p_s[pattern[i]] != prevSubS) return false;
            }
            else
            {
                check_p_s[pattern[i]] = words[i];
            }

            if(check_s_p.count(words[i]))
            {
                if(check_s_p[words[i]] != prevP) return false;
            }
            else
            {
                check_s_p[words[i]] = pattern[i];
            }
        }
        return true;
    }
};

int main()
{
    Solution s1;
    string pattern = "abba", s = "dog cat cat dog";
    cout << s1.wordPattern(pattern, s);

    return 0;
}