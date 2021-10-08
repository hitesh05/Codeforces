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

int n, m, k;

void drop(vector<vector<int>> &v, int &x, int &y)
{
    while (x < n)
    {
        if (v[x][y] == 1)
        {
            y++;
            v[x][y - 1] = 2;
        }
        else if (v[x][y] == 2)
        {
            x++;
        }
        else
        {
            y--;
            v[x][y + 1] = 2;
        }
    }
}

void solve()
{
    cin >> n >> m >> k;

    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    vector<int> balls(k);
    for (int i = 0; i < k; i++)
    {
        cin >> balls[i];
    }

    for (int i = 0; i < k; i++)
    {
        int x = 0;
        int y = balls[i] - 1;
        drop(v, x, y);
        cout << y + 1 << " ";
    }
    cout << endl;
}

int main()
{
    quick

    solve();
}