#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

class Solution 
{
    public:
        vector<string> findWords(vector<string>& words) 
        {
            vector<string> ans;
            string fRow = "qwertyuiop", sRow = "asdfghjkl", tRow = "zxcvbnm";
            unordered_map<char, int> fFreq;
            for(char ch : fRow) fFreq[ch] = 1;

            unordered_map<char, int> sFreq;
            for(char ch : sRow) sFreq[ch] = 2;

            unordered_map<char, int> tFreq;
            for(char ch : tRow) tFreq[ch] = 3;

            for(int i=0; i<words.size(); i++)
            {
                bool kRow = true;
                char c = words[i][0];
                if(fFreq.count(tolower(c)))
                {
                    for(char ch : words[i])
                    {
                        if(!fFreq.count(tolower(ch)))
                        {
                            kRow = false;
                            break;
                        }
                    }
                    if(kRow == true) ans.push_back(words[i]);
                }

                else if(sFreq.count(tolower(c)))
                {
                    for(char ch : words[i])
                    {
                        if(!sFreq.count(tolower(ch)))
                        {
                            kRow = false;
                            break;
                        }
                    }
                    if(kRow == true) ans.push_back(words[i]);
                }

                else if(tFreq.count(tolower(c)))
                {
                    for(char ch : words[i])
                    {
                        if(!tFreq.count(tolower(ch)))
                        {
                            kRow = false;
                            break;
                        }
                    }
                    if(kRow == true) ans.push_back(words[i]);
                }
            }

            return ans;
        }
};

int main()
{
    Solution s1;
    vector<string> words = {"Hello","Alaska","Dad","Peace"};
    vector<string> ans = s1.findWords(words);

    for(string s : ans)
    {
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}
