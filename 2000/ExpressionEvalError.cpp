#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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
        int s, n;
        cin >> s >> n;

        if (s % n == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << s / n << ' ';
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << 1 << ' ';
            }
            cout << s - n + 1 << endl;
        }
    }

    return 0;
}