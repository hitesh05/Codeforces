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
    string s;
    cin >> s;
    int abcount = 0, bacount = 0, acount = 0, bcount = 0;
    string a = "ab", b = "ba";
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s.substr(i, 2) == a)
            abcount++;
        else if (s.substr(i, 2) == b)
            bacount++;
    }
    if (abcount == bacount)
    {
        cout << s << endl;
        return;
    }
    if (abcount > bacount)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                s[i] = 'b';
            break;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b')
                s[i] = 'a';
            break;
        }
    }
    cout << s << endl;
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