#include <iostream>
#include <bits/stdc++.h>
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
        int n, k;
        cin >> n >> k;

        int l_max = n - k + 1;
        l_max--;

        // int r_max = k;
        // r_max--;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int l = 0;
        int r_max = l + k - 1;
        //r_max--;

        bool flag = false;
        int ans = 0;
        int count = 0, max = 0;
        for (int i = l + 1; i < r_max;)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                count++;
                if (i == l + 1)
                {
                    flag = true;
                }
                i += 2;
            }
            else
            {
                i++;
            }
        }

        max = count;

        for (int i = l + 1; i <= l_max; i++)
        {
            r_max = i + k - 1;

            if (flag)
            {
                count--;
            }

            if (v[r_max - 1] > v[r_max - 2] && v[r_max - 1] > v[r_max])
            {
                count++;
            }

            if (v[i + 1] > v[i] && v[i + 1] > v[i + 2])
            {
                flag = true;
            }
            else
            {
                flag = false;
            }

            if (count > max)
            {
                max = count;
                ans = i;
            }
        }

        cout << max + 1 << " " << ans + 1 << endl;
    }
}