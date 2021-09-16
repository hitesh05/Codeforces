#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    quick int n;
    cin >> n;

    int num_odd = 0, num_even = 0, ind_odd = -1, ind_even = -1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
        {
            num_even += 1;
            if (ind_even == -1)
            {
                ind_even = i + 1;
            }
        }
        else
        {
            num_odd += 1;
            if (ind_odd == -1)
            {
                ind_odd = i + 1;
            }
        }
    }

    if (num_even == 1)
    {
        cout << ind_even << endl;
    }
    else
    {
        cout << ind_odd << endl;
    }

    return 0;
}