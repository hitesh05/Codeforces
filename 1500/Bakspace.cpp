#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        string s, t;
        cin >> s;
        cin >> t;
        int a = s.size() - 1;
        int b = t.size() - 1;

        while (a >= 0 && b >= 0)
        {
            if (s[a] == t[b])
            {
                a--;
                b--;
            }
            else
            {
                a -= 2;
            }
        }
        if (b == -1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}