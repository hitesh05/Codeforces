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

        int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int l = min(v[0], v[1]);
        int b = min(v[2], v[3]);
        long long ar = l*b;

        cout << ar << endl;
    }
}