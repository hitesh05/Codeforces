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

ll sum(ll x){
    return x*(x+1)/2;
}

void solve()
{
    ll k,x; cin>>k>>x;

    ll l = 1, r = 2*k - 1;
    ll res = r;

    bool flag = false;

    while(l<=r){
        ll mid = (l+r) >> 1;
        if(mid>k){
            flag = (sum(k) + sum(k-1) - sum(2*k - 1 -mid)>=x);
        }
        else{
            flag = sum(mid) >=x;
        }

        if(flag){
            res = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }

    cout << res << endl;
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
