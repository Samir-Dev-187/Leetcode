#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int removePair(string& s, char first, char second, int points) {
        string temp = "";
        int score = 0;

        for (char ch : s) {
            if (!temp.empty() && temp.back() == first && ch == second) {
                temp.pop_back();
                score += points;
            } else {
                temp.push_back(ch);
            }
        }

        s = temp; 
        return score;
    }

    int maximumGain(string s, int x, int y) {
        int total = 0;

        if (x > y) {
            total += removePair(s, 'a', 'b', x); 
            total += removePair(s, 'b', 'a', y); 
        } else {
            total += removePair(s, 'b', 'a', y); 
            total += removePair(s, 'a', 'b', x);
        }

        return total;
    }
};


int main()
{
    Solution s1;
    string s = "cdbcbbaaabab";
    int x = 4, y = 5;

    cout << s1.maximumGain(s, x, y);
    cout << endl;

    return 0;
}