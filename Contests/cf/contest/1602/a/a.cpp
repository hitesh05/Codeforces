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
    int m = INT16_MAX;
    int ind;
    for(int i=0;i<s.size();i++){
        int x = int(s[i]-'a');
        if(x<m){
            m=x;
            ind=i;
        }
    }
    s.erase(ind,1);

    char c = char(m) + 'a';
    
    cout << c << " " << s << endl;
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