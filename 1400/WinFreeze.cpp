// #include <bits/stdc++.h>

// using namespace std;
// #define pb push_back
// #define mp make_pair

// #define fi first
// #define se second

// #define sz(x) (long long)x.size()

// #define all(c) (c).begin(), (c).end()
// #define allr(c) (c).rbegin(), (c).rend()

// #define ll long long
// #define pii pair<int, int>
// #define mii map<int, int>
// #define uniq(v) (v).erase(unique(all(v)), (v).end())
// #define rep(i, a) for (int i = 0; i < a; i++)
// #define di(a) \
//     int a;    \
//     cin >> a;
// #define fastio()                      \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)

// void solve()
// {
//     ll int n, cn;
//     cin >> n;
//     cn = n;
//     vector<ll int> factors;
//     while (n % 2 == 0)
//     {
//         n /= 2;
//         factors.pb(2);
//         if (sz(factors) > 2)
//             goto F;
//     }
//     for (ll int i = 3; i * i <= n; i += 2)
//     {
//         while (n % i == 0)
//         {
//             n /= i;
//             factors.pb(i);
//             if (sz(factors) > 2)
//                 goto F;
//         }
//         if (n == 1)
//             break;
//     }
//     if (n > 2)
//         factors.pb(n);
// F:
//     if (factors.size() < 2)
//     {
//         cout << "1\n0";
//     }
//     else if (factors.size() == 2)
//     {
//         cout << 2;
//     }
//     else
//     {
//         cout << 1 << "\n";
//         cout << factors[0] * factors[1];
//     }
// }
// int main()
// {
//     fastio();
//     solve();
//     return 0;
// }

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

ll isPrime(ll n)
{
    ll x = sqrt(n);
    x++;
    for (ll i = x; i >= 2; i--)
    {
        if (n % i == 0)
        {
            if(i==n){
                continue;
            }
            return i;
        }
    }
    return -1;
}

void solve()
{
    ll n;
    cin >> n;
    ll n1 = isPrime(n);
    if (n1 == -1 || n == 1)
    {
        cout << 1 << endl
             << 0 << endl;
        return;
    }

    ll n2 = n / n1;
    ll n3 = isPrime(n1);
    ll n4 = isPrime(n2);
    // cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;

    if (n3 == -1 && n4 == -1)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
        if (n3 == -1)
        {
            cout << n2 << endl;
        }
        else
        {
            cout << n1 << endl;
        }
    }
}

int main()
{
    quick

    solve();
}