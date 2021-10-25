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
    int a, b, c;
    cin >> a >> b >> c;
    int c1 = 0, c2 = 0;

    int min_diff = INT16_MAX;

    if (c % 2 == 0)
    {
        min_diff=0;
        if (b % 2 != 0)
        {
            min_diff += 2;
        }

        if (a % 2 == 0)
        {
            min_diff = 0;
        }
        else
        {
            min_diff = 1;
        }
    }
    else
    {
        int x = 1;
        if (a % 2 != 0)
        {
            x = 0;
        }

        min_diff = min(x, min_diff);
    }

    cout << min_diff << endl;
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