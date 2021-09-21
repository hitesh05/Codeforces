#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n, int k)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= v[k] && v[i] > 0)
        {
            ans++;
        }
        else
        {
            break;
        }
    }

    cout << ans << endl;
}

int main()
{
    int n, k;
    cin >> n >> k;
    k--;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    solve(v, n, k);
}