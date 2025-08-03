#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) 
        {
            int n = landStartTime.size();
            int m = waterStartTime.size();

            int bestLand = INT_MAX;
            for (int i = 0; i < n; ++i) {
                bestLand = min(bestLand, landStartTime[i] + landDuration[i]);
            }

            int bestWater = INT_MAX;
            for (int j = 0; j < m; ++j) {
                bestWater = min(bestWater, waterStartTime[j] + waterDuration[j]);
            }

            int ans1 = INT_MAX;
            for (int j = 0; j < m; ++j) {
                int waterStart = waterStartTime[j];
                int waterDur = waterDuration[j];
                int totalFinish = max(bestLand, waterStart) + waterDur;
                ans1 = min(ans1, totalFinish);
            }

            int ans2 = INT_MAX;
            for (int i = 0; i < n; ++i) {
                int landStart = landStartTime[i];
                int landDur = landDuration[i];
                int totalFinish = max(bestWater, landStart) + landDur;
                ans2 = min(ans2, totalFinish);
            }

            return min(ans1, ans2);
        }
};

int main() 
{
    Solution s1;
    vector<int> landStartTime = {2,8};
    vector<int> landDuration = {4,1};
    vector<int> waterStartTime = {6};
    vector<int> waterDuration = {3};

    cout << s1.earliestFinishTime(landStartTime, landDuration, waterStartTime, waterDuration);
    cout << endl;
    
    return 0;
}