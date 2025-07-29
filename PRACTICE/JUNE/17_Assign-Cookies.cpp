#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) 
{
    sort(g.begin(), g.end());
    sort(s.begin(),s.end());
    
    int count = 0;

    int child_idx = 0;
    int cookie_idx = 0;

    while (child_idx<g.size() && cookie_idx<s.size())
    {
        if(s[cookie_idx] >= g[child_idx])
        {
            count++;
            child_idx++;
            cookie_idx++;
        }
        else
        {
            cookie_idx++;
        }
    }
    return count;
}

int main()
{
    vector<int> g = {1,2}, s = {1,2,3};
    cout << findContentChildren(g,s);

    return 0;
}