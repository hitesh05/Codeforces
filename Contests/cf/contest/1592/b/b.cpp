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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    vector<int> k = v;
    sort(k.begin(), k.end());
    if (n > 2 * x)
    {
        cout << "YES" << endl;
        return;
    }
    int a = n - x;

    for (int i = a; i < x; i++)
    {
        if (v[i] != k[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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