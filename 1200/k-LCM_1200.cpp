#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a, b, c;

        if (n % 2 == 0)
        {
            a = n / 2;
            if (a % 2 == 0)
            {
                b = a / 2;
                c = b;
            }
            else
            {
                a -= 1;
                b = a;
                c = n - a - b;
            }
        }
        else
        {
            a = 1;
            b = (n - 1) / 2;
            c = b;
        }

        cout << a << ' ' << b << ' ' << c << endl;
    }
}