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

ll Mod = 1e9 + 7;

ll get_power(ll b, ll p)
{
    // ll k = 1;

    // for (ll j = 0; j < i; j++)
    // {
    //     k = k * n;
    // }
    // return k;
    if (p == 0)
    {
        return 1;
    }
    if (p == 1)
    {
        return b % Mod;
    }
    long long halfpow = get_power(b, p / 2);
    long long res = ((halfpow % Mod) *
                     (halfpow % Mod)) %
                    Mod;
    if (p % 2 != 0)
        res = ((res % Mod) * (b % Mod)) % Mod;
    return res % Mod;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s = bitset<32>(k).to_string();
    ll num = 0;
    // cout << "s: " << s << endl;
    for (ll i = 0; i < 32; i++)
    {
        if (s[i] == '1')
        {
            ll x = 32 - i - 1;
            num += ll(get_power(n, x));
            num = ll(num % Mod);
        }
    }

    cout << num << endl;
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