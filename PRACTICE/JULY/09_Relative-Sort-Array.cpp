#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution 
{
    public:
        vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
        {
            vector<int> result;
            map<int, int> count;    
            for(int val : arr1)
            {
                count[val]++;
            }

            for(int val : arr2)
            {
                while (count[val]-- > 0)
                {
                    result.push_back(val);
                }
                count.erase(val);
            }

            for(auto it=count.begin(); it!=count.end(); ++it)            
            {
                for(int i=0; i < it->second; ++i)
                {
                    result.push_back(it->first);
                }
            }

            return result;
        }
};

int main()
{
    Solution s1;
    vector<int> nums1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> nums2 = {2,1,4,3,9,6};

    vector<int> ans = s1.relativeSortArray(nums1, nums2);
    for(int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}