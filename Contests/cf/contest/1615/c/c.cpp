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
    int n; cin>>n;
    string a,b; cin>>a>>b;

    VI eq(2,0),neq(2,0);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            neq[a[i]-'0']++;
        }
        else{
            eq[a[i]-'0']++;
        }
    }

    int ans = INT_MAX;
    if(neq[0]==neq[1]){
        ans = min(ans,2*neq[1]);
    }
    if(eq[0]+1 == eq[1]){
        ans = min(ans,eq[0]+eq[1]);
    }
    if(ans == INT_MAX){
        ans = -1;
    }

    cout << ans << endl;
    return;
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