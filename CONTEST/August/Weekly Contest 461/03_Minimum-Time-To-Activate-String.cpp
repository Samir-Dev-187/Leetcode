#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minTime(string s, vector<int>& order, int k) {
        int n = s.size();
        set<int> stars;
        long long total = 1LL * n * (n + 1) / 2;
        long long nonStarSubstrings = total;

        for (int t = 0; t < n; ++t) {
            int pos = order[t];
            stars.insert(pos);

            // Find boundaries of the segment pos belongs to
            auto it = stars.find(pos);
            int left = (it == stars.begin()) ? 0 : *prev(it) + 1;
            int right = (next(it) == stars.end()) ? n - 1 : *next(it) - 1;

            // Before inserting this '*', segment was from left to right
            int oldLen = right - left + 1;
            nonStarSubstrings -= 1LL * oldLen * (oldLen + 1) / 2;

            // Now split into [left, pos-1] and [pos+1, right]
            if (pos > left) {
                int lenL = pos - left;
                nonStarSubstrings += 1LL * lenL * (lenL + 1) / 2;
            }
            if (pos < right) {
                int lenR = right - pos;
                nonStarSubstrings += 1LL * lenR * (lenR + 1) / 2;
            }

            long long valid = total - nonStarSubstrings;
            if (valid >= k) return t;
        }

        return -1;
    }
};



int main() 
{
    Solution s1;
    string s = "abc";
    vector<int> order = {1,0,2};
    int k = 2;

    cout << s1.minTime(s, order, k);
    cout << endl;

    return 0;
}