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
        int n;
        cin >> n;
        int arr[n][2] = {0};
        string s1, s2;
        cin >> s1;
        cin >> s2;
        // cout << s1 << endl
        //      << s2 << endl;

        for (int j = 0; j < n; j++)
        {
            arr[j][0] = int(s1[j]) - 48;
            arr[j][1] = int(s2[j]) - 48;
        }
        int ans = 0;
        bool flag;
        if (n == 1)
        {
            flag = true;
        }
        for (int i = 0; i < n - 1;)
        {
            flag = false;
            if (arr[i][0] != arr[i][1])
            {
                ans += 2;
                i++;
                if (i == n - 1)
                {
                    flag = true;
                }
            }
            else if (arr[i][0] == 1 && arr[i][1] == 1)
            {
                if (arr[i + 1][0] != arr[i + 1][1] || arr[i + 1][0] == 0 || arr[i + 1][1] == 0)
                {
                    ans += 2;
                    i += 2;
                    if (i == n - 1)
                    {
                        flag = true;
                    }
                }

                else
                {
                    ans += 0;
                    i++;
                    if (i == n - 1)
                    {
                        flag = true;
                    }
                }
            }
            else if (arr[i][0] == 0 && arr[i][1] == 0)
            {
                if (arr[i + 1][0] == 1 && arr[i + 1][1] == 1)
                {
                    ans += 2;
                    i += 2;
                    if (i == n - 1)
                    {
                        flag = true;
                    }
                }
                else
                {
                    ans += 1;
                    i++;
                    if (i == n - 1)
                    {
                        flag = true;
                    }
                }
            }
        }

        if (flag)
        {
            if (arr[n - 1][0] != arr[n - 1][1])
            {
                ans += 2;
            }
            else if (arr[n - 1][0] == 0 && arr[n - 1][1] == 0)
            {
                ans += 1;
            }
        }

        cout << ans << endl;
    }
}