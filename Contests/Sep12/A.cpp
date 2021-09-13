#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

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
        int n, s;
        cin >> n >> s;
        int x, y;

        if (n % 2 == 0)
        {
            x = n / 2;
            x--;
            y = n - x;
        }
        else
        {
            x = n / 2;
            y = n - x;
        }

        int ans = s / y;
        cout << ans << endl;
    }

    return 0;
}