#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool partitionArray(vector<int>& nums, int k) 
        {   
            int n = nums.size();
            if (n % k != 0) return false; 

            unordered_map<int,int> freq;
            for (int num : nums) 
            {
                freq[num]++;   
            }

            int groups = n / k;  
            for (auto &p : freq) {
                if (p.second > groups) {
                    return false; 
                }
            }

            return true;
        }
};

int main()
{
    Solution s1;
    vector <int> vec = {1,5,2,3};
    int k = 3;

    cout << s1.partitionArray(vec, k);
    cout << endl;

    return 0;
}