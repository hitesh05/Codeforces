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
    VI v(26);

    string s;
    cin >> s;

    for(int i=0;i<26;i++){
        int ind = int(s[i]-'a');
        v[ind]=i;
    }

    string s2;
    cin>>s2;

    int ans=0;

    for(int i=1;i<s2.size();i++){
        int ind1 = int(s2[i]-'a');
        int ind2 = int(s2[i-1]-'a');

        ans = ans + abs(v[ind1] - v[ind2]);
    }

    cout << ans << endl;
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