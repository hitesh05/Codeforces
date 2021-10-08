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

void solve()
{
    int n, k;
    cin >> n >> k;

    char c = 0;

    if (k>=n)
    {
        while (n--)
        {
            cout << char(c + 'a');
            c++;
        }
        cout << endl;
        return;
    }


}

int main()
{
    quick

    solve();
}

// https://codeforces.com/contest/1511/problem/D