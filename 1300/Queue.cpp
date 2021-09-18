#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    quick

        int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int count = 1;
    int sum = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] >= sum)
        {
            sum += v[i];
            count++;
        }
    }

    cout << count << endl;
}