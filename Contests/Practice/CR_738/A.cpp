#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    quick

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        int ans = a[0];
        for(int i=1;i<n;i++){
            ans = ans&a[i];
        }

        cout << ans << endl;

        delete[] a;
    }
}