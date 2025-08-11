#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {   
        const int MOD = 1'000'000'007;
        vector<int> powers;

        // Step 1: n ko powers of 2 me todna
        for (int bit = 0; bit < 31; ++bit) {
            if (n & (1 << bit)) {
                powers.push_back(1 << bit);
            }
        }

        // Step 2: Har query ka product nikalna
        vector<int> ans;
        for (auto &q : queries) {
            long long product = 1;
            for (int i = q[0]; i <= q[1]; ++i) {
                product = (product * powers[i]) % MOD;
            }
            ans.push_back(product);
        }

        return ans;
    }
};

int main()
{
    Solution s1;
    int n = 15;
    vector<vector<int>> matrix = {{0,1},{2,2},{0,3}};

    vector<int> vec = s1.productQueries(n, matrix);
    for(int num : vec)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}