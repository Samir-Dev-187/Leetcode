#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int singleNumber(vector<int>& nums)
{
    if(nums.size()==1) return 0;

    int bestBuy = INT_MAX;
    int bestProfit = INT_MIN;
    for(int i=0; i<nums.size(); i++)
    {
        bestBuy = min(bestBuy,nums[i]);

        if(i==nums.size()-1) break;

        bestProfit = max(nums[i+1]-bestBuy,bestProfit);

        if(bestProfit<0) bestProfit = 0;
    }
    return bestProfit;
}

int main()
{
    vector<int> nums = {7,1,5,3,6,4};
    cout << singleNumber(nums);

}