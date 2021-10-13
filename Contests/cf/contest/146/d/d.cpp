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

    ll a1, a2, a3, a4, i, j, k;
    cin >> a1 >> a2 >> a3 >> a4;
    if (abs(a3 - a4) > 1)
    {
        cout << "-1\n";
        return;
    }
    string s, s4, s7;
    if (a3 > a4)
    {
        for (i = 0; i < a3; i++)
            s.append("47");
    }
    else if (a4 > a3)
    {
        for (i = 0; i < a4; i++)
            s.append("74");
    }
    else
    {
        if (a1 > a3)
        {
            for (i = 0; i < a3; i++)
                s.append("47");
            s.append("4");
        }
        else
        {
            for (i = 0; i < a4; i++)
                s.append("74");
            s.append("7");
        }
    }

    ll c4 = 0, c7 = 0;
    ll f4 = 1e9, l7 = 1e9;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '4')
        {
            c4++;
            f4 = min(f4, i);
        }
        else
            c7++;
    }
    if (c4 > a1)
    {
        cout << "-1\n";
        return;
    }
    if (c7 > a2)
    {
        cout << "-1\n";
        return;
    }

    for (i = 0; i < a1 - c4; i++)
        s4.append("4");
    for (i = 0; i < a2 - c7; i++)
        s7.append("7");

    s.insert(f4, s4);
    for (i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '7')
        {
            l7 = i;
            break;
        }
    }
    s.insert(l7, s7);
    cout << s << "\n";
}

int main()
{
    quick

    solve();
    return 0;
}