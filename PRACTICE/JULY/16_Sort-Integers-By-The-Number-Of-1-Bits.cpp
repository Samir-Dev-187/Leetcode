#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        vector<int> sortByBits(vector<int>& arr) 
        {
            sort(arr.begin(), arr.end(), [](int a, int b) {
            int countA = __builtin_popcount(a);
            int countB = __builtin_popcount(b);
            return (countA == countB) ? a < b : countA < countB;
            });
        }
};

int main()
{
    Solution s1;
    vector<int> arr ={0,1,2,3,4,5,6,7,8};
    
    s1.sortByBits(arr);
    for(int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}