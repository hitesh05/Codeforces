#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v, w;
    int plus = 0, minus = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        w.push_back(x);
        int a;
        a = x / 2;
        v.push_back(a);
        if (a >= 0)
        {
            plus += a;
        }
        else
        {
            minus += a;
        }
    }
    int count = plus + minus;
    // cout << "count: " << count << endl;

    if (count > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (w[i] >= 0)
            {
                cout << v[i] << endl;
            }
            else
            {
                if (count > 0 && w[i] % 2 != 0)
                {
                    cout << v[i] - 1 << endl;
                    count--;
                }
                else
                {
                    cout << v[i] << endl;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (w[i] > 0 && w[i] % 2 != 0 && count < 0)
            {
                cout << v[i] + 1 << endl;
                count++;
            }
            else
            {
                cout << v[i] << endl;
            }
        }
    }

    return 0;
}
