#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (v[n - 1] == 1)
    {
        v[n - 1]++;
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
        return;
    }
    cout << "1 ";
    for (int i = 0; i < n - 1; i++)
        cout << v[i] << " ";
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}