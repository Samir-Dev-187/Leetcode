#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int maximum69Number (int num) 
        {
            int maxNum = INT_MIN;
            string strNum = to_string(num);

            if(all_of(strNum.begin(), strNum.end(), [&](char c){ return c == '9'; })) return num;

            for(int i = 0; i < strNum.length(); ++i)
            {
                string copyStrNum = strNum;

                if(copyStrNum[i] == '6') copyStrNum[i] = '9';
                else if(copyStrNum[i] == '9') copyStrNum[i] = '6';

                maxNum = max(maxNum, stoi(copyStrNum));
            }

            return maxNum;
        }
};

int main()
{
    Solution s1;
    int n = 66;

    cout << s1.maximum69Number(n);
    cout << endl;

    return 0;
}