#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int maximumLengthSubstring(string s) 
    {
        int n = s.length();
        unordered_map<char, int> freq;
        int left = 0, maxLen = 0;

        for(int right = 0; right < n; ++right)
        {
            freq[s[right]]++;

            // Agar koi character 2 se zyada ho gaya to window shrink karo
            while(freq[s[right]] > 2)
            {
                freq[s[left]]--;
                left++;
            }

            // Ab yaha har character <= 2 hai
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

int main()
{
    Solution s1;
    string s = "bcbbbcba";

    cout << s1.maximumLengthSubstring(s);
    cout << endl;

    return 0;
}