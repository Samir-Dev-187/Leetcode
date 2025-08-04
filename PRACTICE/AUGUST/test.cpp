#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> a1 = {{1,1},{0,1},{1,1}};
    vector<vector<int>> a2 = {{1,1},{0,1},{1,1}};

    if(a1 == a2)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    cout << endl;

    return 0;
}