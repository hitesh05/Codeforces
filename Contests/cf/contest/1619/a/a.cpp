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
    string s; cin>>s;
    int n = s.size();
    if(n%2!=0){
        cout << "NO" << endl;
        return;
    }

    int j = n/2;
    int i = 0;
    while(i<n/2 && j<n){
        if(s[i]!=s[j]){
            cout << "NO" << endl;
            return;
        }
        i++; j++;
    }
    cout << "YES" << endl;
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