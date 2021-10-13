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

bool isLucky(string s){
    for(int i=0;i<s.size();i++){
        if(int(s[i])-48!=4&&int(s[i])-48!=7){
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    string s; cin >>s;

    if(!isLucky(s)){
        cout << "NO" << endl;
        return;
    }

    int s1=0,s2=0;
    for(int i=0;i<n/2;i++){
        s1 += int(s[i]);
    }
    for(int i=n/2;i<n;i++){
        s2+=int(s[i]);
    }
    if(s1!=s2){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int main()
{
    quick

    solve();

    return 0;
}