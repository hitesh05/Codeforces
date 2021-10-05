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
    int s; cin >> s;
    int ans = 1,num=1;
    s-=1;

    while(s>0){
        if(s>=num+2){
            num+=2;
            s-=num;
            ans++;
        }
        else{
            ans++;
            break;
        }
        
    }
    cout << ans << endl;
}

int main()
{
    quick

        int t;
    cin >> t;
    //cout << t << endl;
    while (t--)
    {
        solve();
    }
}