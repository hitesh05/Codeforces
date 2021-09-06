#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vll;
typedef pair<long long, long long> pll;
typedef vector<vector<long long>> mll;
typedef vector<pair<long long, long long>> vpl;
typedef long double ld;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        ll x, ans;
        x = ll(r / 2);
        // cout << x << endl;

        if (x >= l)
        {
            x = x + 1;
            //cout << x << endl;
            ans = r%x;
        }
        else
        {
            ans = (r % l);
        }

        cout << ans << endl;
    }
}