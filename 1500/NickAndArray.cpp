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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        if (i == 0)
        {
            i = -1;
        }
        else if (i > 0)
        {
            i = -i - 1;
        }
    }

    int m = *min_element(v.begin(), v.end());
    bool flag = false;

    if (n % 2 == 0)
    {
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else
    {
        for (auto x : v)
        {
            if (x == m && !flag)
            {
                flag = true;
                cout << -x - 1 << " ";
            }
            else
            {
                cout << x << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    quick

    solve();
}