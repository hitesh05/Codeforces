#include <bits/stdc++.h>

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define pb push_back
#define ppb pop_back
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define rep(i, a) for (int i = 0; i < a; i++)
#define di(a) \
    int a;    \
    cin >> a;
#define MOD 1000000007
using namespace std;

void solve()
{
    di(n)
        vector<int>
            v(n), lmao;
    int frq[2001] = {};
    rep(i, n) cin >> v[i];
    rep(i, n) frq[v[i]]++;
    di(q) int p = 1;
    vector<vector<int>> ans;
    vector<int> popu(n, 0);
    ans.pb(v);
    while (1)
    {
        vector<int> tmp = v;
        p++;
        rep(i, n)
        {
            tmp[i] = frq[v[i]];
        }
        ans.pb(tmp);
        rep(i, 2001) frq[i] = 0;
        rep(i, n)
        {
            frq[tmp[i]]++;
        }
        if (tmp == popu)
            break;
        else
            v = tmp;
        popu = tmp;
    }
    while (q--)
    {
        ll int x, k;
        cin >> x >> k;
        // k = k%p;
        if (k > p - 1)
            cout << ans[p - 1][x - 1] << endl;
        else
            cout << ans[k][x - 1] << endl;
        // cout << ans[k][x-1] << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    di(t) while (t--)
        solve();
    return 0;
}