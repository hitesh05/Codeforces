#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;

void printN(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

void print(ll n, ll diff)
{
    diff++;
    ll num1 = diff;
    ll num2 = num1 + diff;

    cout << num1 << " " << num2 << " ";
    int x = num2 + 1;
    for (int i = 1; i <= n - 2; i++, x++)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    quick

        ll n,
        k;
    cin >> n >> k;

    ll min = n / 2;

    if (k == 0 && n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    if (min > k || n / 2 == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    else if (k == min)
    {
        printN(n);
    }
    else
    {
        print(n, k - min);
    }

    return 0;
}