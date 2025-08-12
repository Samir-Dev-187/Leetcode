#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double sum = 0;

        // First window ka sum
        for (int i = 0; i < k; i++)
            sum += nums[i];

        double maxSum = sum;

        // Sliding window
        for (int i = k; i < nums.size(); i++)
        {
            sum += nums[i] - nums[i - k];
            maxSum = max(maxSum, sum);
        }

        // Average nikal ke 5 decimal tak round
        double avg = maxSum / k;
        return round(avg * 1e5) / 1e5;
    }
};

