#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int totalFruit(vector<int>& fruits) 
        {
            unordered_map<int, int> basket;
            int left = 0, maxFruits = 0;

            for(int right = 0; right < fruits.size(); ++right)
            {
                basket[fruits[right]]++;

                // Shrink window if more than 2 types
                while(basket.size() > 2)
                {
                    basket[fruits[left]]--;
                    if(basket[fruits[left]] == 0)
                        basket.erase(fruits[left]);
                    left++;
                }

                maxFruits = max(maxFruits, right - left + 1);
            }

            return maxFruits;
        }
};

int main() 
{
    Solution s1;
    vector<int> vec = {3,3,3,1,2,1,1,2,3,3,4};

    cout << s1.totalFruit(vec);
    cout << endl;

    return 0;
}