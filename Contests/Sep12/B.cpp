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
        string s;
        cin >> s;
        // cout << s << endl;
        int count = 0;
        int ans1 = 0;
        int ans2 = 0;
        //bool flag = false;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                continue;
            }
            else
            {
                char x = s[i - 1];

                if (x == '1' || x == '2')
                {
                    ans1 += 0;
                }
                else
                {
                    ans1 += 1;
                }
                //cout<< ans << endl;
            }
        }
        char x = s[s.size() - 1];
        if (x == '1' || x == '2')
        {
            ans1 += 0;
        }
        else
        {
            ans1 += 1;
        }

        int start[2];
        start[0] = -1;
        start[1] = -1;
        int end[2];
        end[0] = -1;
        end[1] = -1;

        for (int i = 0; i < s.size(); i++)
        {
            int x = int(s[i]) - 48;
            if (start[x] == -1)
            {
                start[x] = i;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            int x = int(s[i]) - 48;
            if (end[x] == -1)
            {
                end[x] = i;
            }
        }

        if (start[0] == -1)
        {
            ans2 = 0;
        }
        else if (start[1] == -1)
        {
            ans2 = 1;
        }
        else if (end[0] < start[1] || end[1] < start[0])
        {
            ans2 = 1;
        }
        else
        {
            ans2 = 2;
        }

        cout << min(ans1, ans2) << endl;
    }
}