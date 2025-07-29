#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution 
{
    public:
        bool canBeEqual(vector<int>& target, vector<int>& arr) 
        {
            unordered_map<int, int> freq;
            for(int num : target) freq[num]++;
            for(int num : arr) freq[num]--;

            for(auto it=freq.begin(); it!=freq.end(); ++it)
            {
                if(it->second != 0)
                {
                    return false;
                }
            }

            return true;
        }
};

int main()
{
    Solution s1;
    vector<int> target = {1,2,3,4};
    vector<int> arr = {2,4,1,3};

    cout << s1.canBeEqual(target, arr);
    
    return 0;
}