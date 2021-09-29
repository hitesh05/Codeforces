#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef std::vector<int> vi;

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        int k, n, m;
        std::cin >> k >> n >> m;

        vi a(n), b(m);
        for (int i = 0; i < n; i++)
            std::cin >> a[i];
        for (int i = 0; i < m; i++)
            std::cin >> b[i];

        int pos1 = 0, pos2 = 0;
        vi res;
        bool ok = true;
        while (pos1 != n || pos2 != m)
        {
            if (pos1 != n && a[pos1] == 0)
            {
                res.push_back(0);
                k++;
                pos1++;
            }
            else if (pos2 != m && b[pos2] == 0)
            {
                res.push_back(0);
                k++;
                pos2++;
            }
            else if (pos1 != n && a[pos1] <= k)
            {
                res.push_back(a[pos1++]);
            }
            else if (pos2 != m && b[pos2] <= k)
            {
                res.push_back(b[pos2++]);
            }
            else
            {
                std::cout << -1 << '\n';
                ok = false;
                break;
            }
        }

        if (ok)
        {
            for (int cur : res)
                std::cout << cur << ' ';
            std::cout << std::endl;
        }
    }

    return 0;
}