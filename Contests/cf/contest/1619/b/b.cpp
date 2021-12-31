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
    ll n;
    cin >> n;

    ll n1 = sqrt(n);
    ll n2 = cbrt(n);

    set<ll> s;

    for(ll i=0;i<=n1;i++){
        ll x = pow(i,2);
        s.insert(x);
    }
    for(ll i=0;i<=n2;i++){
        ll x = pow(i,3);
        s.insert(x);
    }

    cout << s.size()-1 << endl; return;

    // cout << n1 + n2 - 1 << endl;
    // return;
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