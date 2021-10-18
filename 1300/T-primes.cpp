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

ll max_n = 1e5;
vector<bool> prime(n + 1, true);

void SieveOfEratosthenes(int n)
{
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

void solve()
{
    string s, t;
    cin >> s >> t;
    int slen = s.length();
    int tlen = t.length();
    int gcd = __gcd(slen, tlen);
    int lcm = slen * tlen / gcd;
    string ans = "";

    for (int i = 0; i < lcm; i += slen)
    {
        ans += s;
    }
    int j = 0;
    bool f = true;
    for (int i = 0; i < lcm; i++, j++)
    {
        if (s[j % slen] != ans[i])
        {
            f = false;
        }
    }
    j = 0;
    for (int i = 0; i < lcm; i++, j++)
    {
        if (t[j % tlen] != ans[i])
        {
            f = false;
        }
    }

    if (f)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "-1" << endl;
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