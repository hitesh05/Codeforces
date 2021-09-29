#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void B1(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "(";
    }
}

void B2(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "()";
    }
}

void B3(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ")";
    }
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        B1(i);
        B2(n - i);
        B3(i);
        cout << endl;
    }
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
}