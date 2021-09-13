#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

ll ans = 0;

void dfs(vector<vector<int>> graph, vector<bool> &visited, vector<bool> cats, int original, int m, int x)
{
    visited[x] = true;

    if (cats[x] && m < 1)
    {
        return;
    }

    if (graph[x].size() == 1 && x != 1)
    {
        ans++;
        return;
    }

    if (cats[x])
    {
        m--;
    }
    else
    {
        m = original;
    }

    for (int i = 0; i < graph[x].size(); i++)
    {
        if (!visited[graph[x][i]])
        {
            dfs(graph, visited, cats, original, m, graph[x][i]);
        }
    }

    return;
}
int main()
{
    quick 
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    vector<bool> cats(n + 1);

    vector<bool> visited(n + 1);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        visited[i + 1] = false;
        cats[i + 1] = bool(x);
    }

    for (int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        graph[a].pb(b);
        graph[b].pb(a);
    }

    dfs(graph, visited, cats, m, m, 1);

    cout << ans << endl;
    //delete[] visited;
}
