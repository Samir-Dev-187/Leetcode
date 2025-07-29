#include <iostream>
#include <string>
#include <unordered_map>
using namespace std; 

char findTheDifference(string s, string t) 
{
    unordered_map<char, int> charCount;
    for(char ch : s)
    {
        charCount[ch]++;
    }

    for(char ch : t)
    {
        if(charCount.find(ch) == charCount.end() || charCount[ch] == 0)
        {
            return ch;
        }
        charCount[ch]--;
    }
    return ' ';
}  

int main()
{
    string s="a", t="aa";

    char ch = findTheDifference(s, t);
    cout << ch << endl;
    
    return 0;
}
