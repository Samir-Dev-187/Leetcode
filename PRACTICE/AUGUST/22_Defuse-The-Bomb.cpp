#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<int> decrypt(vector<int>& code, int k) 
        {
            int n = code.size();

            if(k == 0)
            {
                vector<int> decryptedCode(n, 0);
                return decryptedCode;
            }
            
            vector<int> decryptedCode;
            for(int i = 0; i < n; ++i)
            {
                int sum = 0;

                if(k > 0) // next
                {
                    int idx = (i + 1) % n;
                    for(int j = 0; j < abs(k); ++j)
                    {
                        sum += code[idx];
                        idx = (idx + 1) % n;
                    }
                    decryptedCode.push_back(sum);
                }
                else if(k < 0) // prev
                {
                    int idx = (i - 1 + n) % n;
                    for(int j = 0; j < abs(k); ++j)
                    {
                        sum += code[idx];
                        idx = (idx - 1 + n) % n;
                    }
                    decryptedCode.push_back(sum);
                }
            }

            return decryptedCode;
        }
};

int main()
{
    Solution s1;
    vector<int> vec = {5,2,2,3,1};    
    int k = 3;

    vector<int> ans = s1.decrypt(vec, k);
    for(int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}