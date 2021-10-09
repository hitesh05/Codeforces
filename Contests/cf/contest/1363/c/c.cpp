#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;

using PII = pair<int, int>;
using VI = vector<int>;
#define fs first
#define ss second

void solve()
{
    int n, x;
    cin >> n >> x;

    // vector<vector<int>> graph(n + 1);
    vector<int> indegree(n + 1, 0);

    for (int i = 0; i < n - 1; i++)
    {
        int s, e;
        cin >> s >> e;

        // graph[s].push_back(e);
        indegree[s]++;
        // graph[e].push_back(s);
        indegree[e]++;
    }

    // queue<int> q;

    if (indegree[x] <= 1)
    {
        cout << "Ayush" << endl;
        return;
    }

    if (n % 2 != 0)
    {
        cout << "Ashish" << endl;
    }
    else
    {
        cout << "Ayush" << endl;
    }
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

    return 0;
}
