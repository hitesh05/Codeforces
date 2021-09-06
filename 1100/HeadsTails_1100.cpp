#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    int count = 0;
    vector<pair<int, int>> v;

    for (int i = a; i <= x; i++)
    {
        for (int j = b; j <= y; j++)
        {
            if (i > j)
            {
                pair<int, int> p;
                p.first = i;
                p.second = j;
                v.push_back(p);
                count += 1;
            }
        }
    }

    cout << count << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << ' ' << v[i].second << endl;
    }

    return 0;
}