#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;

using PII = pair<int, int>;
using VI = vector<int>;
#define fst first
#define snd second

void solve()
{
    int n;
    cin >> n;
    vector<PII> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].fst;
        a[i].snd = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i].fst;
        b[i].snd = i;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 2 * (n - 1);
    int idx = n;
    for (int i = 0; i < n; i++)
    {
        idx = min(idx, a[i].snd);
        ans = min(ans, idx + b[i].snd);
    }
    cout << ans << '\n';
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