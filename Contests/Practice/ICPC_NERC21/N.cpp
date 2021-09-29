#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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
        int c[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> c[i];
        }
        int a[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }

        bool ans = true;
        for (int i = 0; i < 3; i++)
        {
            c[i] = c[i] - a[i];
            if (c[i] < 0)
            {
                ans = false;
            }
        }
        if (!ans)
        {
            cout << "NO" << endl;
            continue;
        }

        if (c[0] >= a[3] && c[1] >= a[4])
        {
            cout << "YES" << endl;
        }
        else if (c[0] < a[3])
        {
            if (c[0] + c[2] >= a[3])
            {
                c[2] = c[2] - (a[3] - c[0]);
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }

            if (c[1] >= a[4])
            {
                cout << "YES" << endl;
            }
            else
            {
                if (c[1] + c[2] >= a[4])
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else if (c[1] < a[4])
        {
            if (c[1] + c[2] >= a[4])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}