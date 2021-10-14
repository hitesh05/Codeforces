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

typedef long long LL;
#define MAXN 100002

int n, m, k;
LL a[MAXN];
struct Query
{
    int l, r;
    LL d;
} q[MAXN];
int qf[MAXN];
LL af[MAXN];

void solve()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> q[i].l >> q[i].r >> q[i].d;
    for (int i = 1, x, y; i <= k; i++)
    {
        cin >> x >> y;
        qf[x]++;
        qf[y + 1]--;
    }
    for (int i = 1; i <= m; i++)
    {
        qf[i] += qf[i - 1];
        q[i].d *= qf[i];
        af[q[i].l] += q[i].d;
        af[q[i].r + 1] -= q[i].d;
    }
    for (int i = 1; i <= n; i++)
    {
        af[i] += af[i - 1];
        a[i] += af[i];
        cout << a[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    quick

    solve();

    return 0;
}