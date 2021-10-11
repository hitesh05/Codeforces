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
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(5));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> v[i][j];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << v[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != j)
            {
                set<int> s1, s2;
                for (int k = 0; k < n; k++)
                {
                    if (v[k][i])
                    {
                        s1.insert(k);
                    }
                    if (v[k][j])
                    {
                        s2.insert(k);
                    }
                }
                if (s1.size() >= n / 2 && s2.size() >= n / 2)
                {
                    set<int> s(s1);
                    s.insert(s2.begin(), s2.end());
                    if (s.size() == n)
                    {
                        cout << "YES" << endl;
                        return;
                    }
                }
            }
        }
    }

    cout << "NO" << endl;
    return;
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