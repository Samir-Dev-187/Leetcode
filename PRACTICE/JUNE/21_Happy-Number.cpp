#include<iostream>
#include<unordered_set>
using namespace std;

bool isHappy(int n) 
{
    unordered_set<int> seen;
    while (n !=1 && !seen.count(n))
    {
        seen.insert(n);
        int sum = 0;
        while (n > 0)
        {
            int x = n%10;
            sum += (x*x);
            n /= 10;
        }
        n = sum;
    }
    return n==1;
}

int main()
{
    int num = 19;
    cout << isHappy(num);

    return 0;
}