#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long int ll;

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        vector<int> v;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        int time;
        int crackers;
        if (a < b)
        {
            crackers = b - a - 1;
            time = b - 1;
        }
        else
        {
            crackers = a - b - 1;
            time = n - b;
        }

        int count = 0;
        time--;
        for (int i = min(m - 1, crackers - 1); i >= 0; i--)
        {
            if (v[i] <= time)
            {
                count++;
                time--;
            }
        }
        
        cout << count << endl;
    }

    return 0;
}