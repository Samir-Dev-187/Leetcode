#include<iostream>
#include<unordered_map>
using namespace std;

int romanToInt(string s) 
{
    unordered_map<string, int> symbol = {
        {"I",1}, {"V",5}, {"X",10}, {"L", 50},
        {"C", 100}, {"D", 500}, {"M", 1000},
        {"IV", 4}, {"IX", 9}, {"XL", 40},
        {"XC", 90}, {"CD", 400}, {"CM", 900}
    };

    int sum = 0;
    for(int i=0; i<s.length(); )
    {
        string twoChar = s.substr(i,2);
        if(symbol.count(twoChar))
        {
            sum += symbol[twoChar];
            i += 2;
        }
        else
        {
            string oneChar = s.substr(i,1);
            sum += symbol[oneChar];
            i += 1;
        }
    }
    
    return sum;
}

int main()
{
    string s="LVIII";
    cout << romanToInt(s);

    return 0;
}