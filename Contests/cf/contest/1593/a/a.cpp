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
    VI arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    int max = -1;
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == max)
        {
            count++;
        }
    }

    int num[3];

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] < max)
            cout << max + 1 - arr[i] << " ";
        else
        {
            if (count == 1)
                cout << 0 << " ";
            else
                cout << 1 << " ";
        }
    }
    cout << endl;
    // int a, b, c;
    // cin >> a >> b >> c;
    // int m = max(a, max(b, c));

    // if (a != b && b != c)
    // {
    //     if (a == m)
    //     {
    //         cout << 0 << " ";
    //     }
    //     else
    //     {
    //         cout << m - a + 1 << ' ';
    //     }

    //     if (b == m)
    //     {
    //         cout << 0 << " ";
    //     }
    //     else
    //     {
    //         cout << m - b + 1 << ' ';
    //     }

    //     if (c == m)
    //     {
    //         cout << 0 << " ";
    //     }
    //     else
    //     {
    //         cout << m - c + 1 << ' ';
    //     }
    //     cout << endl;
    //     return;
    // }

    // int x;
    // if (a == b && b == c)
    // {
    //     cout << 1 << ' ' << 1 << ' ' << 1 << endl;
    //     return;
    // }
    // if (a == b)
    // {
    //     if (a == m)
    //     {
    //         cout << 1 << " " << 1 << " " << m - c + 1 << endl;
    //         return;
    //     }
    //     else
    //     {
    //         cout << m - a + 1 << " " << m - b + 1 << " " << 0 << endl;
    //         return;
    //     }
    // }
    // if (b == c)
    // {
    //     if (b == m)
    //     {
    //         cout << m - a + 1 << ' ' << 1 << ' ' << 1 << endl;
    //         return;
    //     }
    //     else
    //     {
    //         cout << 0 << ' ' << m - b + 1 << ' ' << m - c + 1 << endl;
    //         return;
    //     }
    // }
    // if (c == a)
    // {
    //     if (c == m)
    //     {
    //         cout << 1 << ' ' << m - b + 1 << ' ' << 1 << endl;
    //         return;
    //     }
    //     else
    //     {
    //         cout << m - a + 1 << ' ' << 0 << ' ' << m - c + 1 << endl;
    //         return;
    //     }
    // }
    // cout << endl;
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