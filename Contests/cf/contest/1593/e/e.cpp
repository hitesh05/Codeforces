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
    int n, k;
    cin >> n >> k;

    vector<vector<int>> v(n + 1);
    VI indegree(n + 1, 0);
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < n - 1; i++)
    {
        int s, e;
        cin >> s >> e;
        v[s].push_back(e);
        v[e].push_back(s);
        indegree[s]++;
        indegree[e]++;
    }

    if (n == 1)
    {
        if (k >= 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
        return;
    }
    if (k == 0)
    {
        cout << n << endl;
        return;
    }

    queue<PII> q;
    VI level(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0 || indegree[i] == 1)
        {
            q.push({i, 0});
            indegree[i] = 0;
            visited[i] = true;
        }
    }

    while (!q.empty())
    {
        PII p = q.front();
        q.pop();
        level[p.fs] = level[p.ss] + 1;
        for (auto &i : v[p.fs])
        {
            indegree[i]--;
            if (indegree[i] == 1 && !visited[i])
            {
                q.push({i, p.fs});
                visited[i] = true;
            }
        }
    }

    sort(level.begin(), level.end());
    for (int i = 0; i < level.size(); i++)
    {
        if (level[i] > k)
        {
            cout << level.size() - i << endl;
            return;
        }
    }
    cout << 0 << endl;
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

/*

b main
b solve
tui e
run < in1.txt

*/