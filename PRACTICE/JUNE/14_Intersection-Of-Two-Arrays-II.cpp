#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
{
    vector<int> result;
    int n1=nums1.size(), n2=nums2.size();
    if(n1 > n2)
    {
        for(int i=0; i<n2; i++)
        {
            for(int j=0; j<nums1.size(); j++)
            {
                if(nums1[j]==nums2[i])
                {
                    result.push_back(nums1[j]);
                    swap(nums1[j],nums1[nums1.size()-1]);
                    nums1.pop_back();
                    break;
                }
            }
        }
    }
    else
    {
        for(int i=0; i<n1; i++)
        {
            for(int j=0; j<nums2.size(); j++)
            {
                if(nums2[j]==nums1[i])
                {
                    result.push_back(nums2[j]);
                    swap(nums2[j],nums2[nums2.size()-1]);
                    nums2.pop_back();
                    break;
                }
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums1 = {3,1,2};
    vector<int> nums2 = {1,1};

    vector<int> res = intersection(nums1, nums2);
    for(int r : res)
    {
        cout << r << " ";
    }
    return 0;
}
