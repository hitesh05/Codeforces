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

int lis(vector<int> v,int n){
    int count = 1;
    for(int i=1;i<n;i++){
        if(v[i]>v[i-1]){
            count++;
        }
        else{
            break;
        }
    }

    return count;
}

int solve()
{
    int n; cin >> n;
    vector<int> v1(n), v2(n);
    map<int,int> m;
    for(auto &i:v1){
        cin >> i;
    }
    for(int i=0;i<n;i++){
        cin >> v2[i];
        pair<int,int> p(v2[i],i);
        m.insert(p);
    }

    for(int i=0;i<n;i++){
        v1[i] = m[v1[i]];
    }

    int x = lis(v1,n);
    //cout << "x: " << x << endl;

    return n-x;
}

int main()
{
    quick

    cout << solve();
}