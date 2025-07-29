#include<iostream>
#include<vector>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) 
{
    vector<string> result_range;

    if(nums.empty())
    {
        return result_range;
    }
    
    int i=0;
    while(i < nums.size())
    {
        int j = i;
        while (j+1 < nums.size() && nums[j+1] == nums[j] +1)
        {
            j++;
        }

        int start_num = nums[i];
        int end_num = nums[j];
        
        string current_range_str;
        if(start_num == end_num)
        {
            current_range_str = to_string(start_num);
        }
        else
        {
            current_range_str = to_string(start_num) + "->" + to_string(end_num);
        }
        result_range.push_back(current_range_str);

        i = j + 1;
    }
    return result_range;    
}

int main()
{
    vector<int> nums1 = {0, 1, 2, 4, 5, 7};
    vector<string> result1 = summaryRanges(nums1);
    cout << "Input: [0,1,2,4,5,7] -> Output: [";
    for (int k = 0; k < result1.size(); ++k) {
        cout << "\"" << result1[k] << "\"";
        if (k < result1.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}