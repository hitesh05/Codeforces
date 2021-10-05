#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;

using PII = pair<int, int>;
using VI = vector<int>;
#define fs first
#define ss second

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            v.push_back(i);
        }
    }

    if (v.size() == 0)
    {
        cout << 1 << " " << n - 1 << " " << 2 << " " << n << endl;
        return;
    }

    int x = v[0];
    if (x >= n / 2)
    {
        cout << 1 << " " << x + 1 << " " << 1 << " " << x << endl;
    }
    else
    {
        cout << x + 2 << " " << n << " " << x + 1 << " " << n << endl;
    }

    return;
}

int main()
{
    quick

        int t;
    cin >> t;
    //cout << t << endl;
    while (t--)
    {
        solve();
    }
}