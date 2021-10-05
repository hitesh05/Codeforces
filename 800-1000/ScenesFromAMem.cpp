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

int n;

string s;

bool prime[100];

void solve()
{
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9')
        {
            cout << 1 << endl;
            cout << s[i] << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (!prime[(s[i] - '0') * 10 + (s[j] - '0')])
            {
                cout << 2 << endl;
                cout << s[i] << s[j] << endl;
                return;
            }
        }
    }
    exit(42);
}

int main()
{
    quick

    for (int i = 2; i < 100; i++)
    {
        prime[i] = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime[i] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        solve();
    }
}