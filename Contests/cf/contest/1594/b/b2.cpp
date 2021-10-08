#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
const int Mod = 1e9 + 7, N = 2e5 + 1;
using namespace std;
#define fin(n, arr)                    \
    for (int(i) = 0; (i) < (n); (i)++) \
    {                                  \
        cin >> (arr)[i];               \
    }
#define fout(n, arr)                   \
    for (int(i) = 1; (i) < (n); (i)++) \
    {                                  \
        cout << (arr)[i] << " ";       \
    };
#define ll long long
#define ulli unsigned long long int
#define MOHARM                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
const int INF = 0x3f3f3f3f;
double pi = 3.141592653589;
long long fastPower(long long b, long long p)
{
    if (p == 0)
    {
        return 1;
    }
    if (p == 1)
    {
        return b % Mod;
    }
    long long halfpow = fastPower(b, p / 2);
    long long res = ((halfpow % Mod) *
                     (halfpow % Mod)) %
                    Mod;
    if (p % 2 != 0)
        res = ((res % Mod) * (b % Mod)) % Mod;
    return res % Mod;
}
ll k;
ll ans(ll n)
{
    ll sum = 0;
    int i = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            n--;
            sum += (fastPower(k, i) % Mod);
        }
        n /= 2;
        i++;
    }
    return sum % Mod;
}
int main()
{
    MOHARM
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        cin >> k;
        ll n;
        cin >> n;
        cout << ans(n) << endl;
    }
}