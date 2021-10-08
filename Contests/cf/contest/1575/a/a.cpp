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
    int n,m; cin >> n>>m;
    vector<pair<string,int>> v;
    for(int i=0;i<n;i++){
        string s; cin >> s;
        for(int j=1;j<m;j+=2){
            s[j] = 'Z' - (s[j]-'A');
        }
        v.push_back({s,i+1});
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i].second << " ";
    }
    cout << endl;
}

int main()
{
    solve();
}