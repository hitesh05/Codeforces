#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int num_zero = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                num_zero++;
            }
        }
        ll ans = 0;

        if (num_zero == 0)
        {
            ans = int(s[n - 1]) - 48;
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] != '0')
                {
                    ans = ans + int(s[i]) + 1 - 48;
                }
            }
        }
        else
        {
            ans = int(s[n - 1]) - 48;
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] != '0')
                {
                    ans = ans + int(s[i]) + 1 - 48;
                }
            }
        }

        cout << ans << endl;
    }
}