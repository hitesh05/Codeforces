#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int solve()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 2)
    {
        delete[] a;
        return 1;
    }

    vector<int> v(n);
    v[0] = 0;
    v[1] = 1;

    int ans = 0;
    for (int i = 2; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            ans++;
        }
        v[i] = v[ans] + 1;
    }

    delete[] a;
    return v[n - 1];
}

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        int ans = solve();
        cout << ans << endl;
    }
}