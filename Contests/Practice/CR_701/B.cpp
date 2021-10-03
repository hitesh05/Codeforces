#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick   \
    cin.tie(0); \
    ios_base::sync_with_stdio(false);

int main()
{
    quick

        int n,
        q, k;
    cin >> n >> q >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << k + v[r - 1] - v[l - 1] - 2 * (r - l) - 1 << endl;
    }
    return 0;
}
