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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count1 = 0, count2 = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (s[i - 1] == '0')
                {
                    count1++;
                }
            }
            else
            {
                if (s[i - 1] == '1')
                {
                    count2++;
                }
            }
        }

        cout << max(count1, count2) << endl;
    }

    return 0;
}