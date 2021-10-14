// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// #define quick                         \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(0);

// typedef long long int ll;

// using PII = pair<int, int>;
// using VI = vector<int>;
// #define fs first
// #define ss second

// void solve()
// {
//     int n, k;
//     cin >> n >> k;

//     vector<vector<int>> v(n + 1);
//     VI indegree(n + 1, 0);

//     for (int i = 0; i < n - 1; i++)
//     {
//         int s, e;
//         cin >> s >> e;
//         v[s].push_back(e);
//         v[e].push_back(s);
//         indegree[s]++;
//         indegree[e]++;
//     }

//     if (n == 0 || n == 1 || n == 2)
//     {
//         cout << 0 << endl;
//         return;
//     }
//     if (k == 0)
//     {
//         cout << n << endl;
//         return;
//     }

//     VI cur;
//     for (int i = 1; i <= n; i++)
//     {
//         if (indegree[i] == 0 || indegree[i] == 1)
//         {
//             cur.push_back(i);
//             indegree[i] = 0;
//         }
//     }

//     int ans = n;
//     while (k--)
//     {
//         ans -= cur.size();
//         VI cur2;

//         for (auto &leaf : cur)
//         {
//             for (auto &x : v[leaf])
//             {
//                 indegree[x]--;
//                 if (indegree[x] == 1)
//                 {
//                     cur2.push_back(x);
//                 }
//             }
//             indegree[leaf] = 0;
//         }
//         cur = cur2;
//     }

//     cout << max(ans, 0) << endl;
// }

// int main()
// {
//     quick

//         int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

// /*

// b main
// b solve
// tui e
// run < in1.txt

// */

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
#define ff first
#define ss second
#define pb push_back
#define all(s) s.begin(), s.end()
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define sz(x) (int)(x).size()
#define fightFight cin.tie(0)->sync_with_stdio(0)

void solve()
{

    int n, k;
    cin >> n >> k;
    vvi adj(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    vi leaves;
    vi degree(n, 0);
    for (int i = 0; i < n; i++)
    {
        degree[i] = sz(adj[i]);
        if (degree[i] == 0 || degree[i] == 1)
        {
            leaves.pb(i);
            degree[i] = 0;
        }
    }

    int left = n;
    while (k)
    {
        left -= sz(leaves);
        vi newleaves;

        for (auto &leaf : leaves)
        {
            for (auto &to : adj[leaf])
            {
                degree[to]--;
                if (degree[to] == 1)
                {
                    newleaves.pb(to);
                }
            }
            degree[leaf] = 0;
        }
        leaves = newleaves;
        k--;
    }

    cout << max(left, 0) << endl;
}

signed main()
{
    fightFight;

    tc
    {
        solve();
    }
}