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
    int n,k;
    cin>>n>>k;
    vector<bool> v(n+1,false);
    for(int i=0;i<k;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v[b]=true;
    }

    int x;
    for(int i=1;i<n+1;i++){
        if(!v[i]){
            x=i;
        }
    }

    for(int i=1;i<=n;i++){
        if(i!=x){
            cout << x << ' ' << i << endl;
        }
    }
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