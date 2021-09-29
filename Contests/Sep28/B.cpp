#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<pair<int, int>, int> ans;
    for (int i = 0; i < n; i++)
    {
        int j;
        j = min_element(v.begin() + i, v.end()) - v.begin();
        if(j!=i){
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
