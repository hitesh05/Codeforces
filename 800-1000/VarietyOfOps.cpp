#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        int c, d;
        cin >> c >> d;
        int a = 0, b = 0;

        int x = c + d;

        if (c == 0 && d == 0)
        {
            cout << 0 << endl;
        }
        else if (x % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            x = x / 2;
            a += x;
            b += x;

            if (a == c && b == d)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
}