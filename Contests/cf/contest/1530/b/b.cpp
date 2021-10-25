#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<ii> vii;

void solve()
{
    int h, w;
    cin >> h >> w;
    vvi arr(h, vi(w, 0));
    for (int i = 0; i < w; i++)
    {
        arr[0][i] = (i + 1) % 2;
        arr[h - 1][i] = (i + 1) % 2;
    }
    for (int i = 2; i < h - 2; i++)
    {
        arr[i][0] = (i + 1) % 2;
        arr[i][w - 1] = (i + 1) % 2;
    }
    for (auto x : arr)
    {
        for (auto s : x)
        {
            cout << s;
        }
        cout << "\n";
    }
    cout << "\n";
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