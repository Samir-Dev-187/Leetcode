#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        long long perfectPairs(vector<int>& nums) 
        {
            vector<int> jurnavalic = nums;
            int n = jurnavalic.size();
            sort(jurnavalic.begin(), jurnavalic.end(), [](int a, int b) {
                return abs(a) < abs(b);
            });

            long long count = 0;

            for (int i = 0; i < n; ++i) {
                int a = jurnavalic[i];
                int lo = i + 1, hi = n - 1, mid;

                while (lo <= hi) {
                    mid = (lo + hi) / 2;
                    int b = jurnavalic[mid];
                    int min_ab = min(abs(a), abs(b));
                    int max_ab = max(abs(a), abs(b));
                    int min_expr = min(abs(a - b), abs(a + b));
                    int max_expr = max(abs(a - b), abs(a + b));

                    if (min_expr <= min_ab && max_expr >= max_ab) {
                        count += (mid - i);
                        lo = mid + 1;
                    } else {
                        hi = mid - 1;
                    }
                }
            }

            return count;
        }
};

int main()
{
    Solution s1;
    vector<int> vec = {-3,2,-1,4};

    cout << s1.perfectPairs(vec);
    cout << endl;

    return 0;
}