#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    //vector<pair<int, int>> v;
    priority_queue<pair<int, int>> pq;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pq.push({x, i});
    }

    vector<pair<int, int>> ans;
    int count = 0;
    while (pq.size() > 1)
    {
        pair<int, int> p1 = pq.top();
        pq.pop();
        pair<int, int> p2 = pq.top();
        pq.pop();

        if (p1.first > 0 && p2.first > 0)
        {
            p1.first--;
            p2.first--;
            count++;
            ans.push_back(make_pair(p1.second, p2.second));
        }

        if (p1.first > 0)
        {
            pq.push(p1);
        }
        if (p2.first > 0)
        {
            pq.push(p2);
        }
    }

    cout << count << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
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
