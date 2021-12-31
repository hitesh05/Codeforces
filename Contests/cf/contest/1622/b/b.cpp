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

template <typename T>
void print(T a)
{
    for (auto i = a.begin(); i != a.end(); i++)
        cout << *i << " ";
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    VI a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    string s;
    cin >> s;
    vector<pair<int, int>> p, p1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            p.push_back({a[i], i});
        else
            p1.push_back({a[i], i});
    }
    sort(p.begin(), p.end());
    sort(p1.begin(), p1.end());
    VI ans(n);
    int x = p.size();
    for (int i = x - 1; i >= 0; i--)
        ans[p[i].second] = n--;
    x = p1.size();
    for (int i = x - 1; i >= 0; i--)
        ans[p1[i].second] = n--;

    print(ans);
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