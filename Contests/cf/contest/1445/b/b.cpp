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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    cout << max(a+b,c+d) << endl;
    return;
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