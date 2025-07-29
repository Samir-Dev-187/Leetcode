#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
        int getCommon(vector<int>& nums1, vector<int>& nums2) 
        {
            for(int i=0; i<nums1.size(); ++i)
            {
                if(nums1[i] >= nums2[0] && nums1[i] < nums2[nums2.size()-1])
                {
                    int st = 0, end = nums2.size()-1;
                    while (st < end)
                    {
                        int mid = st + (end-st)/2;

                        if(nums1[i] == nums2[mid]) return nums1[i];
                        else if(nums2[mid] < nums1[i])
                        {
                            st = mid + 1;
                        }
                        else if(nums2[mid] > nums1[i])
                        {
                            end = mid;
                        }
                    }
                }
            }

            return -1;
        }
};

int main()
{
    Solution s1;
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,4};

    cout << s1.getCommon(nums1, nums2);
    cout << endl;

    return 0;
}