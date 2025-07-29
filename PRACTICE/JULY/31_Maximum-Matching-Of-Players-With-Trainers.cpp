#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) 
        {
            sort(players.begin(), players.end());
            sort(trainers.begin(), trainers.end());

            int count = 0;
            int i = 0, j = 0;
            while (i < players.size() && j < trainers.size())
            {
                if(players[i] <= trainers[j])
                {
                    count++; i++;
                }
                j++;
            }
            
            return count;
        }
};

int main()
{
    Solution s1;
    vector<int> p = {4,7,9};
    vector<int> t = {8,2,5,8};

    cout << s1.matchPlayersAndTrainers(p, t);
    
    return 0;
}