#include <iostream>
#include <bits/stdc++.h>
#include <assert.h>
using namespace std;

#define quick   \
    cin.tie(0); \
    ios_base::sync_with_stdio(false);

int grid[25][25];
void tick(int x, int y, int d)
{
    if (x < d || y < d)
        return;
    for (int i = 0; i <= d; i++)
    {
        if (!grid[x - i][y - i] || !grid[x - i][y + i])
            return;
    }
    for (int i = 0; i <= d; i++)
    {
        ++grid[x - i][y - i];
        ++grid[x - i][y + i];
    }
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
            grid[i][j] = s[j] == '*';
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            for (int d = k; j + d < m; d++)
                tick(i, j, d);
    bool ok = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (grid[i][j] == 1)
                ok = false;
    cout << (ok ? "YES" : "NO") << endl;
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
}