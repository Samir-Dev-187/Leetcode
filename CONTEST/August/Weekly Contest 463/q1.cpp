#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) 
        {
            int n = prices.size();
            int m = strategy.size();
            long long original_profit = 0;

            for(int i = 0; i < min(n, m); ++i)
            {
                original_profit += (1LL * prices[i] * strategy[i]);
            }

            vector<int> copyS = strategy;
            for(int i = 0; i <= m-k; ++i)
            {
                long long profit = 0;
                strategy = copyS;
                for(int j = i; j < m-k+i; ++j)
                {
                    if(j < m-(k/2)+i)
                    {
                        strategy[j] = 0;
                    }
                    else
                    {
                        strategy[j] = 1;
                    }
                }
                
                for(int i = 0; i < min(n, m); ++i)
                {
                    profit += (1LL * prices[i] * strategy[i]);
                }

                original_profit = max(original_profit, profit);
            }

            return original_profit;
        }
};

int main()
{
    

    return 0;
}