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
    set<int> used;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0 && !used.count(i))
        {
            used.insert(i);
            n /= i;
            break;
        }
    }
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0 && !used.count(i))
        {
            used.insert(i);
            n /= i;
            break;
        }
    }
    if (int(used.size()) < 2 || used.count(n) || n == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        used.insert(n);
        for (auto it : used)
        {
            cout << it << " ";
        }
        cout << endl;
    }
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