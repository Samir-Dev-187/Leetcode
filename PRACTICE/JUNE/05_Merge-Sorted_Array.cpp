#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for (int i = 0; i < n; ++i) {   
        nums1[m + i] = nums2[i];
    }
    sort(nums1.begin(), nums1.end()); 
}

int main() {
    vector<int> nums1_ex2 = {4, 5, 6, 0, 0, 0}; 
    int m_ex2 = 3;
    vector<int> nums2_ex2 = {1, 2, 3};
    int n_ex2 = 3;

    merge(nums1_ex2, m_ex2, nums2_ex2, n_ex2);

    for(int val : nums1_ex2) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}