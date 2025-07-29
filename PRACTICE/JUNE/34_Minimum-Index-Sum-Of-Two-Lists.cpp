#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
#include<climits>
using namespace std;

class Solution 
{
    public:
        vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) 
        {
            unordered_map<string, int> storeList1;
            for (int i = 0; i < list1.size(); ++i) 
            {
                storeList1[list1[i]] = i;
            }

            vector<string> ans;
            int minSum = INT_MAX;

            for (int i = 0; i < list2.size(); ++i) 
            {
                if (storeList1.count(list2[i])) 
                {
                    int indexSum = storeList1[list2[i]] + i;
                    if (indexSum < minSum) 
                    {
                        ans.clear();
                        ans.push_back(list2[i]);
                        minSum = indexSum;
                    } else if (indexSum == minSum) 
                    {
                        ans.push_back(list2[i]);
                    }
                }
            }

            return ans;
        }
};

int main()
{
    Solution s1;
    vector<string> list1 = {"happy","sad","good"};
    vector<string> list2 = {"sad","happy","good"};

    vector<string> ans = s1.findRestaurant(list1, list2);
    for(string a : ans)
    {
        cout << a << " ";
    }
    cout << endl;
    
    return 0;
}