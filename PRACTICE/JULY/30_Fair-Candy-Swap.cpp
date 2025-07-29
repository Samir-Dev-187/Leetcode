#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) 
        {
            vector<int> ans;
            sort(aliceSizes.begin(), aliceSizes.end());
            sort(bobSizes.begin(), bobSizes.end());

            int sumA = 0, sumB = 0;

            for(int i=0; i<aliceSizes.size(); ++i)
            {
                sumA += aliceSizes[i];
            }
            for(int i=0; i<bobSizes.size(); ++i)
            {
                sumB += bobSizes[i];
            }

            int x, y, diff = (sumA-sumB)/2;
            int i=0, j=0;
            while (i < aliceSizes.size() && j < bobSizes.size())
            {
                x = aliceSizes[i], y = bobSizes[j];
                if(x == y + diff)
                {
                    ans.push_back(x);
                    ans.push_back(y);
                    return ans;
                }

                else if(x < y + diff)
                {
                    i++;
                }
                else
                {
                    j++;
                }
            }
            return ans;
        }
};

int main()
{
    
    
    return 0;
}