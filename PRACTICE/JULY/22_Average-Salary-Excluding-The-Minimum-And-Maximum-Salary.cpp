#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution 
{
    public:
        double average(vector<int>& salary) 
        {
            sort(salary.begin(), salary.end());
            salary.pop_back();
            swap(salary[0], salary[salary.size()-1]);
            salary.pop_back();

            int i=0;
            int sum = 0;
            for(int num : salary)
            {
                sum += num;
                i++;
            }

            return double(sum/i);
        }
};

int main()
{
    Solution s1;
    vector<int> nums = {4000,3000,1000,2000};

    cout << s1.average(nums);
    cout << endl;
    
    return 0;
}