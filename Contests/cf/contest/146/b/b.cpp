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

string mask(string s)
{
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4')
        {
            ans += '4';
        }
        if (s[i] == '7')
        {
            ans += '7';
        }
    }

    return ans;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    if (b > a)
    {
        cout << b << endl;
        return;
    }

    string y = to_string(b);
    a++;

    while (true)
    {
        string x = to_string(a);
        string m = mask(x);
        if (m == y)
        {
            cout << x << endl;
            return;
        }
        a++;
    }
}

int main()
{
    quick

    solve();

    return 0;
}