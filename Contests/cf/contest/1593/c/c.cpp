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
    VI v(k);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end(), greater<int>());

    int time = 0;
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        time += n - v[i];
        if (time >= n)
        {
            cout << count << endl;
            return;
        }
        count++;
    }
    cout << count << endl;
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