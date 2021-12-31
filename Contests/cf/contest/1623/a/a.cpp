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
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;
    rb--, cb--; rd--, cd--;
    int ans = 0;
    int dr = 1, dc = 1;
    while (rb != rd && cb != cd)
    {
        ans++;
        rb += dr;
        if (rb < 0)
        {
            rb = 1; dr *= -1;
        }
        else if (rb >= n)
        {
            rb = n - 2; dr *= -1;
        }
        cb += dc;
        if (cb < 0)
        {
            cb = 1; dc *= -1;
        }
        else if (cb >= m)
        {
            cb = m - 2; dc *= -1;
        }
    }
    cout << ans << endl;
    return;
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