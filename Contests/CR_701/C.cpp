#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                        \
    ios_bas::sync_with_stdio(false); \
    cin.tie(false);

void solve(){
    int x, y; cin >> x >> y;
    long long int ans = 0;
    for(int i=1;i*i<x;i++){
        ans += max(min(y,x/i-1)-i,0);
    }

    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}