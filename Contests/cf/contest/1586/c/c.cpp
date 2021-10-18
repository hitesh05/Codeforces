#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ub upper_bound
#define loop(i, k, n) for (ll i = k; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    char arr[n + 2][m + 2];
    loop(i, 0, n + 2)
    {
        loop(j, 0, m + 2) arr[i][j] = '.';
    }
    set<int> bad;
    set<int> fullcol;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    loop(i, 1, n + 1)
    {
        loop(j, 1, m + 1)
        {
            if (arr[i][j] == '.')
            {
                if (arr[i - 1][j] == 'X' && arr[i][j - 1] == 'X')
                {
                    bad.insert(j);
                }
            }
            if (arr[i][j] == 'X')
            {
                if (arr[i - 1][j] == 'X' && arr[i][j - 1] == 'X')
                {
                    bad.insert(j);
                }
            }
        }
    }
    int q;
    cin >> q;
    loop(i, 0, q)
    {
        int x1, x2;
        cin >> x1 >> x2;
        if (x1 == x2)
        {
            cout << "YES\n";
            continue;
        }
        if (!bad.size())
        {
            cout << "YES\n";
            continue;
        }
        auto it = bad.ub(x1);
        if (it != bad.end())
        {
            if (*it <= x2)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else
        {
            cout << "YES\n";
        }
    }
}