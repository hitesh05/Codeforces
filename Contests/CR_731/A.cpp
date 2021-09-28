#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long int ll;

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        int ans = abs(x1 - x2) + abs(y1 - y2);
        if (x1 == x3 && x2 == x3)
        {
            if ((y3 > y1 && y3 > y2) || (y3 < y1 && y3 < y2))
            {
                ans = ans;
            }
            else
            {
                ans += 2;
            }
        }
        if (y1 == y3 && y2 == y3)
        {
            if ((x3 > x1 && x3 > x2) || (x3 < x1 && x3 < x2))
            {
                ans = ans;
            }
            else
            {
                ans += 2;
            }
        }

        cout << ans << endl;
    }
}