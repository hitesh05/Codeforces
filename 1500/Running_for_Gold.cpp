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

bool check(VI v, VI w)
{
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        if (v[i] < w[i])
        {
            count++;
        }
    }

    return count > 2;
}

void solve()
{
    int n;
    cin >> n;
    vector<VI> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    int w = 0;
    for (int i = 1; i < n; i++)
    {
        if (!check(v[w], v[i]))
        {
            w = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == w)
        {
            continue;
        }
        if (!check(v[w], v[i]))
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << w + 1 << endl;
    return;
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