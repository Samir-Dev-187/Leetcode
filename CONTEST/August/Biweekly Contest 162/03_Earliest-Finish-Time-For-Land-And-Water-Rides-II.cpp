#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) 
        {
            int minFinishTime = INT_MAX;

            int n = landStartTime.size();
            int m = waterStartTime.size();

            for (int i = 0; i < n; ++i) { 
                for (int j = 0; j < m; ++j) { 

                    int landStart = landStartTime[i];
                    int landDur = landDuration[i];
                    int landFinish = landStart + landDur;

                    int waterStart = max(landFinish, waterStartTime[j]);
                    int waterDur = waterDuration[j];
                    int finishTime1 = waterStart + waterDur;

                    int waterStart2 = waterStartTime[j];
                    int waterDur2 = waterDuration[j];
                    int waterFinish = waterStart2 + waterDur2;

                    int landStart2 = max(waterFinish, landStartTime[i]);
                    int landDur2 = landDuration[i];
                    int finishTime2 = landStart2 + landDur2;

                    minFinishTime = min({minFinishTime, finishTime1, finishTime2});
                }
            }

            return minFinishTime;
        }
};

int main() 
{
    Solution s1;
    
    return 0;
}