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

bool even(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    return false;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    int n_even = 0, n_odd = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (even(a))
        {
            n_even++;
        }
        else
        {
            n_odd++;
        }
    }

    if (n_odd == 0)
    {
        cout << "No" << endl;
        return;
    }

    if (x == n)
    {
        if (even(n_odd))
        {
            cout << "No" << endl;
            return;
        }
    }

    if(even(x)){
        if(n_even==0){
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
    return;
}

int main()
{
    quick

        int t;
    cin >> t;
    //cout << t << endl;
    while (t--)
    {
        solve();
    }
}