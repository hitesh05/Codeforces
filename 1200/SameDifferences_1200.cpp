#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        // int A[n];
        unordered_map<int, int> m;
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x -= i;

            if (m.count(x) > 0)
            {
                ans += m[x];
                m[x]++;
            }
            else
            {
                m[x] = 1;
            }
        }

        cout << ans << endl;
    }
}