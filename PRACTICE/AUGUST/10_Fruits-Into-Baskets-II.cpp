#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) 
        {
            int count  = 0;
            int n = fruits.size();

            for(int i = 0; i < n; ++i)
            {
                bool placed = false;

                for(int j = 0; j < n; ++j)
                {
                    if(baskets[j] >= fruits[i])
                    {
                        baskets[j] = -1;
                        placed = true;
                        break;
                    }
                }
                if(!placed) count++;
            }

            return count;
        }
};

int main() 
{
    Solution s1;
    vector<int> fruits = {4,2,5};
    vector<int> baskets = {3,5,4};
    
    cout << s1.numOfUnplacedFruits(fruits, baskets);
    cout << endl;

    return 0;
}