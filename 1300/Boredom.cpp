#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;
#define NUM 100003

int main()
{
    quick

        int n;
    cin >> n;

    vector<ll> a(NUM), ans(NUM);
    for (int i = 0; i < NUM; i++)
    {
        a[i] = 0;
        ans[i] = 0;
    }

    ll m = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m = max(m, x);
        a[x]++;
    }
    //cout << a[100000] * 100000 << endl;

    ans[0] = 0;
    ans[1] = a[1];

    for (int i = 2; i <= m; i++)
    {
        ans[i] = max(ans[i - 1], ans[i - 2] + (i * a[i]));
    }

    cout << ans[m] << endl;

    // delete[] a;
    // delete[] ans;
}