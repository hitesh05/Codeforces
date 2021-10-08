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

void solve()
{
    int ans = 0;
    cin >> s;
    for (int k = 0;; k += 25)
    {
        string t = to_string(k);
        if (s.size() < t.size())
            break;
        if (s.size() > t.size())
            continue;
        char x = '-';
        bool ok = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '_')
                ;
            else if (s[i] == 'X')
            {
                if (x == '-')
                    x = t[i];
                else if (x != t[i])
                {
                    ok = false;
                    break;
                }
            }
            else if (s[i] != t[i])
            {
                ok = false;
                break;
            }
        }
        if (ok)
            ans++;
    }
    cout << ans << endl;
}

int main()
{
    quick

    solve();
}