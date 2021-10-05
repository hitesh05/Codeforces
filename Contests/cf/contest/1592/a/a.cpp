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
    int n, h;
    cin >> n >> h;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int w1 = pq.top();
    pq.pop();
    int w2 = pq.top();
    pq.pop();
    int w = w1 + w2;
    int ans;

    ans = h / w;
    h -= ans * w;
    ans *= 2;
    if (h > 0)
    {
        if (h <= w1)
            ans++;
        else
            ans += 2;
    }
    cout << ans << endl;
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