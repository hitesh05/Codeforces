#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        int j;
        j = min_element(v.begin() + i, v.end()) - v.begin();
        if (j != i)
        {
            ans.push_back({i, j});
            int x = v[j];
            v.erase(v.begin() + j);
            v.insert(v.begin() + i, x);
        }
    }

    cout << ans.size() << endl;
    for (auto &[a, b] : ans)
    {
        cout << a + 1 << " " << b + 1 << " " << b - a << endl;
    }
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
