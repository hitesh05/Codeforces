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
    int n,a,b,c;
    cin >>n>>a>>b>>c;

    vector<int> dp(n+1);
    for(int i=0;i<=n;i++){
        dp[i] = -1e10;
    }
    dp[0]=0;

    for(int i=a;i<=n;i++){
        dp[i] = max(dp[i],dp[i-a]+1);
    }
    for(int i=b;i<=n;i++){
        dp[i] = max(dp[i],dp[i-b]+1);
    }
    for(int i=c;i<=n;i++){
        dp[i] = max(dp[i],dp[i-c]+1);
    }

    cout << dp[n] << endl;
}

int main()
{
    quick

    solve();
}