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
    VI v;
    for(int i=0;i<3;i++){
        int x; cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int a = v[0];
    int b = v[1];
    int c = v[2];

    if(a+b==c){
        cout << "YES" << endl;
        return;
    }

    if(a==b){
        if(c%2==0){
            cout << "YES" << endl;
            return;
        }
    }
    if(c==b){
        if(a%2==0){
            cout << "YES" << endl;
            return;
        }
    }
    if(a==c){
        if(b%2==0){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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