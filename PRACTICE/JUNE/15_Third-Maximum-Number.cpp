#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int thirdMax(vector<int>& nums) {
    long firstMax = LONG_MIN, secondMax = LONG_MIN, thirdMax = LONG_MIN;

    for (int num : nums) {
        if (num == firstMax || num == secondMax || num == thirdMax) continue;

        if (num > firstMax) {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = num;
        } else if (num > secondMax) {
            thirdMax = secondMax;
            secondMax = num;
        } else if (num > thirdMax) {
            thirdMax = num;
        }
    }

    return (thirdMax == LONG_MIN) ? firstMax : thirdMax;
}

int main() {
    vector<int> nums = {2, 2, 3, 1};
    cout << "Third Maximum: " << thirdMax(nums) << endl;
    return 0;
}
