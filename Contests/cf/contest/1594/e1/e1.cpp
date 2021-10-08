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

#define MOD 1000000007

void solve()
{
    int n;
    cin >> n;
    ll ans = 6, tmp = 4;
    while (n != 1)
    {
        n -= 1;
        tmp *= tmp;
        tmp %= MOD;
        ans = ans * tmp;
        ans %= MOD;
    }
    cout << ans;
}

int main()
{
    quick

    solve();
}