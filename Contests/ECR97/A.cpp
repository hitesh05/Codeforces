#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    quick

    int t; cin >> t;
    while (t--)
    {
        int l,r; cin >> l >> r;
        if(2*l > r){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}