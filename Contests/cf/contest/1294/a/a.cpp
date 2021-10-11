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
    vector<int> v(3);
    int n;
    for (auto &i : v)
    {
        cin >> i;
    }
    cin >> n;

    sort(v.begin(), v.end());
    int d1 = v[2] - v[1];
    int d2 = v[2] - v[0];

    n = n - d1 - d2;
    if (n >= 0)
    {
        if (n % 3 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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