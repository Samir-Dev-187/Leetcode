#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
{
    set<int> set1(nums1.begin(), nums1.end());
    set<int> result;

    for(int num : nums2)
    {
        if(set1.count(num))
        {
            result.insert(num);
        }
    }
    return vector<int>(result.begin(), result.end());
}

int main()
{
    vector<int> nums1 = {1,2,2,1}, nums2 = {2,2};
    vector<int> result = intersection(nums1, nums2);
    for(int r : result)
    {
        cout << r << " ";
    }
    return 0;
}