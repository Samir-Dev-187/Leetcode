#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    unordered_map<int,int> storeNum;
    for(int i=1; i<=n; ++i)
    {
        storeNum[i]++;
    }

    if(storeNum.count(1) == 1)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }

    return 0;
}