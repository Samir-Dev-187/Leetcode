#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution 
{
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
        {
            vector<int> ans;
            map<int, int> storeNums2;
            for(int i=0; i<nums2.size(); i++)
            {
                storeNums2[nums2[i]] = i;
            }

            for(int i=0; i<nums1.size(); i++)
            {
                if(storeNums2.count(nums1[i]))
                {
                    int target = nums1[i];
                    int start = storeNums2[target];
                    bool g = false;

                    for(int idx = start+1; idx<nums2.size(); idx++)
                    {
                        if(nums2[idx] > target)
                        {
                            ans.push_back(nums2[idx]);
                            g =true;
                            break;
                        }
                    }
                    if(!g)
                    {
                        ans.push_back(-1);
                    }
                }        
            }

            return ans;
        }
};

int main()
{
    Solution s1;
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};

    vector<int> ans = s1.nextGreaterElement(nums1, nums2);
    cout << "[";
    for(int num : ans)
    {
        cout << num << " ";
    }
    cout << "]" << endl;

    return 0;
}