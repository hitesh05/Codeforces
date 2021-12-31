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
    string s;
    cin >> n >> s;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        VI f(3, 0);
        f[s[i] - 'a']++;
        for (int j = i + 1; j < min(n, i + 7); j++)
        {
            f[s[j] - 'a']++;
            if (f[0] > f[1] && f[0] > f[2])
                ans = min(ans, j - i + 1);
        }
    }
    if (ans == INT_MAX)
        ans = -1;
    cout << ans << endl;
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