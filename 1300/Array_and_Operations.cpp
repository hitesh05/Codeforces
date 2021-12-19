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
    int n, k;
    cin >> n >> k;

    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int ans = 0;
    VI v, w;

    for (int i = 0; i < k; i++)
    {
        int a = pq.top();
        pq.pop();
        v.push_back(a);
    }
    for (int i = 0; i < k; i++)
    {
        int a = pq.top();
        pq.pop();
        w.push_back(a);
    }

    for (int i = 0; i < k; i++)
    {
        ans += int(w[i] / v[i]);
    }
    while(!pq.empty()){
        ans += pq.top(); pq.pop();
    }

    cout << ans << endl;
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