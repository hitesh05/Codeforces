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
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;
    int count = 0;
    vector<int> diff;
    for (int i = 0; i < n; i++)
    {
        if (char(s[i]) != char(c))
        {
            count++;
            diff.push_back(i + 1);
        }
    }

    if (!count)
    {
        cout << 0 << endl;
        return;
    }
    if (count == 1)
    {
        cout << 1 << endl;
        if (diff[0] < n)
        {
            cout << n << endl;
        }
        else
        {
            cout << n - 1 << endl;
        }
        return;
    }

    // if (s[n - 1] == c)
    // {
    //     cout << 1 << endl;
    //     cout << n << endl;
    //     //return;
    // }
    // else if (s[n - 2] == c)
    // {
    //     cout << 1 << endl;
    //     cout << n - 1 << endl;
    //     //return;
    // }
    else
    {
        for (int i = n / 2; i < n; i++)
        {
            if (s[i] == c)
            {
                cout << 1 << endl
                     << i + 1 << endl;
                return;
            }
        }
        cout << 2 << endl
             << n << " " << n - 1 << endl;
    }
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