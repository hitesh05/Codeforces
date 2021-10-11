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

int q, x;

void solve(vector<int> &mods, set<pair<int, int>> &vals)
{
    int cur;
    cin >> cur;
    cur %= x;
    vals.erase(make_pair(mods[cur], cur));
    ++mods[cur];
    vals.insert(make_pair(mods[cur], cur));
    cout << vals.begin()->first * x + vals.begin()->second << endl;
}

int main()
{
    quick

            cin >>
        q >> x;
    vector<int> mods(x);

    set<pair<int, int>> vals;
    for (int i = 0; i < x; ++i)
    {
        vals.insert(make_pair(mods[i], i));
    }
    while (q--)
    {
        solve(mods, vals);
    }

    return 0;
}