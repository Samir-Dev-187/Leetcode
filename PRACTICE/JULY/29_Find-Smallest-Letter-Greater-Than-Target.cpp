#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution 
{
    public:
        char nextGreatestLetter(vector<char>& letters, char target) 
        {
            int st = 0, end = letters.size()-1;;
            char minNGL = CHAR_MAX;

            while (st <= end)
            {
                int mid = st + (end-st)/2;
                if(letters[mid] > target)
                {
                    minNGL = min(letters[mid], minNGL);
                    end = mid - 1;
                }
                else if(letters[mid] <= target)
                {
                    st = mid + 1;
                }
            }

            return minNGL != CHAR_MAX ? minNGL : letters[0];
        }
};

int main()
{
    Solution s1;

    
    return 0;
}