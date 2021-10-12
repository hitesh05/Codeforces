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
    ll n,x;
    cin>>n>>x;
    vector<int> a(n),b(n);
    for(auto &i:a){
        cin >>i;
    }
    for(auto &i:b){
        cin >>i;
    }

    sort(a.begin(),a.end());
    sort(b.begin(), b.end());

    for(int i=0;i<n;i++){
        int test = a[i]+b[n-i - 1];
        if(test>x){
            cout << "No" << '\n';
            return;
        }
    }
    cout << "Yes" << '\n';
    
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