#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, t, c;
    cin >> n >> t >> c;
    int *A = new int[n];

    for (long long int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int length = 0;
    int ways = 0;

    for (long long int i = 0; i < n; i++)
    {
        if (A[i] <= t)
        {
            length += 1;
        }
        else
        {
            if (length >= c)
            {
                ways += length - c + 1;
            }
            length = 0;
        }
    }
    if (length >= c)
    {
        ways += length - c + 1;
    }

    cout << ways << endl;
    delete A;
}