
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long int ll;
//#define int ll
#define quick          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
#define ff first
#define ss second
#define pb push_back
#define all(s) s.begin(), s.end()
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define file_read(x, y)     \
    freopen(x, "r", stdin); \
    freopen(y, "w", stdout);
vector<vector<ll>> adj(1e5 + 1);
vector<ll> visit(1e5 + 1, 0);
vector<ll> check(1e5 + 1, 0);
ll sum = 0;
ll dfs(ll x, ll og, ll m)
{
    if (visit[x] == 1)
        return 0;
    visit[x] = 1;
    if (check[x] == 1 && m - 1 < 0)
    {
        return 0;
    }
    if (adj[x].size() == 1 && x != 1)
    {
        sum++;
        return 0;
    }
    ll n = m;

    if (check[x] == 1)
    {
        m--;
    }
    else
        m = og;
    for (ll i = 0; i < adj[x].size(); i++)
    {
        dfs(adj[x][i], og, m);
    }
    return 0;
}
int main()
{
    quick
        ll i,
        j, k, n, m;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        cin >> j;
        check[i] = j;
    }
    for (i = 1; i < n; i++)
    {
        cin >> j >> k;
        adj[j].pb(k);
        adj[k].pb(j);
    }
    dfs(1, m, m);
    ll total = 0;
    // for(i=1;i<=n;i++)
    // {
    //     if(adj[i].size()==1) total++;
    // }
    cout << sum << endl;
}