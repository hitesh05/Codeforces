#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define mod 1e9 + 7

long long int detpart2(vector<vector<long long int>> v, int n, int size, int i, int j)
{
    if (size == 1)
    {
        return v[i][j];
    }

    long long int ans = 0;

    int row = i;
    for (int x = 0; x < size; x++)
    {
        ans += v[row][j] * detpart2(v, n, --size, (i + 1) % n, ++j);
        row = (row + 1) % n;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<long long int>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    long long int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int s = (i + 1) % n;
        ans += v[i][0] * detpart2(v, n, n - 1, s, 1);
    }

    ans = ans % (long long int)(mod);

    cout << ans << endl;
}