#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick   \
    cin.tie(0); \
    ios_base::sync_with_stdio(false);

typedef long long int ll;

ll calc(ll n)
{
    return (n * (n - 1)) / 2;
}

bool solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    if (m < n - 1 || m > calc(n) || k < 2)
        return false;
    if (k >= 4)
        return true;
    if (n == 1)
        return true;
    if (k == 2)
        return false;
    if (n == 2)
        return true;
    return m == calc(n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}