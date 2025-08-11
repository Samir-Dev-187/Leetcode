#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const int MOD = 1'000'000'007;
        vector<long long> powers;

        // Step 1: Binary representation se powers array banana
        for (int bit = 0; bit < 31; ++bit) { // 1 <= n <= 1e9, so max 30 bits needed
            if (n & (1 << bit)) {
                powers.push_back(1LL << bit);
            }
        }

        // Step 2: Prefix product array banana (modulo ke sath)
        vector<long long> prefix(powers.size() + 1, 1);
        for (int i = 0; i < powers.size(); ++i) {
            prefix[i + 1] = (prefix[i] * powers[i]) % MOD;
        }

        // Step 3: Har query ka jawab nikalna using prefix products
        vector<int> ans;
        ans.reserve(queries.size());
        for (auto &q : queries) {
            int l = q[0], r = q[1];
            long long res = (prefix[r + 1] * modInverse(prefix[l], MOD)) % MOD;
            ans.push_back((int)res);
        }

        return ans;
    }

private:
    // Modular inverse using Fermat's little theorem
    long long modPow(long long base, long long exp, long long mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp & 1) result = (result * base) % mod;
            base = (base * base) % mod;
            exp >>= 1;
        }
        return result;
    }

    long long modInverse(long long a, long long mod) {
        return modPow(a, mod - 2, mod);
    }
};
