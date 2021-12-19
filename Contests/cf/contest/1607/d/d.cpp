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
    VI a(n);
    for (int &x : a)
        cin >> x;
    string col;
    cin >> col;
    VI red, blue;
    for (int i = 0; i < n; i++)
    {
        (col[i] == 'R' ? red : blue).push_back(a[i]);
    }
    sort(red.rbegin(),red.rend());
    sort(blue.rbegin(),blue.rend());
    for (int i = 1; i <= n; i++)
    {
        if (!blue.empty() && blue.back() >= i)
        {
            blue.pop_back();
        }
        else if (!red.empty() && red.back() <= i)
        {
            red.pop_back();
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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