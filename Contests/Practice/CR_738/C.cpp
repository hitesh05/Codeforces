#include <iostream>
#include <bits/stdc++.h>
#define maxn 100086

using namespace std;

int t, n;
int a[maxn];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (a[1])
    {
        cout << n + 1 << " ";
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (!a[i] && a[i + 1])
        {
            for (int j = 1; j <= i; j++)
                cout << j << " ";
            cout << n + 1 << " ";
            for (int j = i + 1; j <= n; j++)
                cout << j << " ";
            return;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << n + 1 << " ";
}

int main()
{
    cin >> t;
    while (t--)
    {
        solve(), puts("");
    }

    return 0;
}