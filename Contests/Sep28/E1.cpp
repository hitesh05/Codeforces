#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    deque<int> q;

    int x;
    cin >> x;
    q.push_back(x);
    for (int i = 1; i < n; i++)
    {
        int y;
        cin >> y;

        int a = q.front();
        if (y < a)
        {
            q.push_front(y);
        }
        else
        {
            q.push_back(y);
        }
    }
    for (auto it:q)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
