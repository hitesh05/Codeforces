#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long int ll;

using PII = pair<int, int>;
using VI = vector<int>;
#define fs first
#define ss second

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());

    int abc = 0, ord = 0;
    vector<char> ans;
    for (auto i : v)
    {
        int x = i.first - abc, y = i.second - ord;

        if (x < 0)
        {
            cout << "NO" << endl;
            return;
        }
        if (y < 0)
        {
            cout << "NO" << endl;
            return;
        }

        abc += x;
        ord += y;
        for (int i = 0; i < x; i++)
        {
            ans.push_back('R');
        }
        for (int i = 0; i < y; i++)
        {
            ans.push_back('U');
        }
    }
    cout << "YES" << endl;
    for (auto i : ans)
    {
        cout << i;
    }
    cout << endl;
    // cout << endl << endl;
}

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}