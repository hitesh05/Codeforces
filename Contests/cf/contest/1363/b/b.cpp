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
    string s;
    cin >> s;
    int z = 0, o = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            z++;
        }
        else
        {
            o++;
        }
    }

    int ans = min(z, o);
    int z_1 = 0, o_1 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            o_1++;
        }
        else
        {
            z_1++;
        }

        int ans1 = z_1 + (o - o_1);
        int ans2 = o_1 + (z - z_1);
        ans = min(ans, min(ans1, ans2));
    }
    cout << ans << endl;
    return;
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
}