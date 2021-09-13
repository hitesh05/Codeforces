#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll P2 = (ll)2e18;

int solve(string s, string t)
{
    int tp = 0;
    int sp = 0;
    int taken = 0;

    while (sp < s.length() && tp < t.length())
    {
        if (s[sp] == t[tp])
        {
            taken++;
            tp++;
        }
        sp++;
    }

    return (int)s.length() + (int)t.length() - (2 * (taken));
}

vector<string> ts;

int main()
{
    for (ll p = 1; p <= P2; p *= 2)
        ts.push_back(to_string(p));

    int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;

        int ans = n.length() + 1;
        for (auto p : ts)
            ans = min(ans, solve(n, p));
        cout << ans << '\n';
    }

    return 0;
}
