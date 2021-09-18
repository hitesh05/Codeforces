#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    quick

        int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        set<int> used;
        for (int i = 2; i * i <= n; ++i)
        {
            if (n % i == 0 && !used.count(i))
            {
                used.insert(i);
                n /= i;
                break;
            }
        }
        for (int i = 2; i * i <= n; ++i)
        {
            if (n % i == 0 && !used.count(i))
            {
                used.insert(i);
                n /= i;
                break;
            }
        }
        if (int(used.size()) < 2 || used.count(n) || n == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            used.insert(n);
            for (auto it : used)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}