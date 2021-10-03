#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick   \
    cin.tie(0); \
    ios_base::sync_with_stdio(false);

void solve()
{
    int n;
    cin >> n;
    vector<int> a, b, c;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
        {
            a.push_back(x);
        }
        else if (x == 0)
        {
            b.push_back(x);
        }
        else
        {
            c.push_back(x);
        }
    }
    cout << 1 << " " << a[a.size() - 1] << endl;
    a.pop_back();

    int s = a.size() - (a.size() % 2);
    cout << s + c.size() << " ";
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    s = (a.size() % 2) + b.size();
    cout << s << " ";
    if (a.size() % 2 == 1)
    {
        cout << a[a.size() - 1] << " ";
    }
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main()
{
    solve();
}