#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int computeXOR(int n)
{
    if (n % 4 == 0)
        return n;

    if (n % 4 == 1)
        return 1;

    if (n % 4 == 2)
        return n + 1;

    return 0;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int mex, x;

        cin >> mex >> x;

        int ans1 = computeXOR(mex - 1);
        int ans2 = ans1 ^ mex;

        if (ans1 == x)
        {
            cout << mex << endl;
        }
        else if (ans2 == x)
        {
            cout << mex + 2 << endl;
        }
        else
        {
            cout << mex + 1 << endl;
        }
    }
}
