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
    // int a = log2(200000);
    // cout <<a <<endl;
    int a, b;
    cin >> a >> b;

    int x = a;
    int y = log2(a) + 1;
    int ans = INT_MAX;

    // for (int bit = 0; bit<=y; bit++)
    // {
    //     int cnt = 0;
    //     for (int i = a; i <= b; i++)
    //     {
    //         if(i & (1<<bit)){
    //             continue;
    //         }
    //         else{
    //             cnt++;
    //         }
    //     }

    //     ans = min(ans,cnt);
    // }

    int cnt = 0,cnt2=0;

    for (int i = a; i <= b; i++)
    {
        if (i & (1 << y))
        {
            cnt = cnt;
        }
        else
        {
            cnt++;
        }

        if (i & (1 << (y-1)))
        {
            cnt2 = cnt2;
        }
        else
        {
            cnt2++;
        }
    }

    ans = min(cnt2, cnt);

    // cnt = 0;
    // for (int i = a; i <= b; i++)
    // {
    //     if (i & (1 << (y-1)))
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         cnt++;
    //     }
    // }

    // ans = min(ans, cnt);

    cout << ans << endl;
    return;
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