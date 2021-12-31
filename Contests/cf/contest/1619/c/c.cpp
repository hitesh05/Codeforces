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
    ll a, s;
    cin >> a >> s;
    VI b;
    while (s)
    {
        int x = a % 10;
        int y = s % 10;
        if (x <= y){
            b.emplace_back(y - x);
        }
        else
        {
            s /= 10;
            y += 10 * (s % 10);
            if (x < y && y >= 10 && y <= 19){
                b.emplace_back(y - x);
            }
            else
            {
                cout << -1 << '\n';
                return;
            }
        }
        a /= 10;
        s /= 10;
    }
    if (a)
        cout << -1 << '\n';
    else
    {
        while (b.back() == 0)
            b.pop_back();
        for (int i = b.size() - 1; i >= 0; i--)
            cout << b[i];
        cout << '\n';
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