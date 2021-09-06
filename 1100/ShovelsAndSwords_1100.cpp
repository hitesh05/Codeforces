#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;
    vector<int> v;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        
        int c = int((a + b) / 3);

        int ans;
        ans = min(min(a, b), c);
        v.push_back(ans);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}