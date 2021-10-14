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

string s;

int find(char c, int i)
{
    if (c == '0')
    {
        for (int x = i - 1; x >= 0; x--)
        {
            if (s[x] == '0' || s[x] == '5')
            {
                return x;
            }
        }
        return -1;
    }
    if (c == '5')
    {
        for (int x = i - 1; x >= 0; x--)
        {
            if (s[x] == '2' || s[x] == '7')
            {
                return x;
            }
        }
        return -1;
    }
    return -1;
}

void solve()
{
    cin >> s;
    int a, b;
    int ans = s.size() - 1;
    for (int i = s.size() - 1; i >= 1; i--)
    {
        if (s[i] == '0')
        {
            int x = find('0', i);
            if (x != -1)
            {
                a = s.size() - 1 - i;
                b = i - x - 1;
                if (a + b >= 0)
                {
                    ans = min(ans, a + b);
                }
            }
        }
        if (s[i] == '5')
        {
            int x = find('5', i);
            if (x != -1)
            {
                a = s.size() - 1 - i;
                b = i - x - 1;
                if (a + b >= 0)
                {
                    ans = min(ans, a + b);
                }
            }
        }
    }
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