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
    int n, e;
    cin >> n >> e;

    VI v, w;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x == 1)
        {
                w.push_back(i);
        }
    }

    set<PII> s;

    for (int i = 0; i < w.size(); i++)
    {
        int x = w[i];
        if(x>=e){
            if(v[x-e]!=1){
                s.insert({v[x],v[x-e]});
            }
        }
        if(x<n-e){
            if(v[x+e]!=1){
                s.insert({v[x],v[x+e]});
            }
        }
    }

    cout << s.size() << endl;
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