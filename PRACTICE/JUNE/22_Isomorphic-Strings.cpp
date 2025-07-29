#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) 
{
    unordered_map<char, char> s_to_t;
    unordered_map<char, char> t_to_s;

    for(int i=0; i<s.length(); i++)
    {
        char sc = s[i], tc = t[i];

        if(s_to_t.count(sc) && s_to_t[sc]!=tc) return false;
        else s_to_t[sc] = tc;

        if(t_to_s.count(tc) && t_to_s[tc]!=sc) return false;
        else t_to_s[tc] = sc;
    }
    return true;
}

int main()
{
    string s = "egg", t="add";
    cout << isIsomorphic(s, t);

    return 0;
}