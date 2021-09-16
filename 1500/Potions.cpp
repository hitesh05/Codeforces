#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    quick

        int n;
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long S = 0;

    for (int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        S += x;
        pq.push(x);

        while (S < 0)
        {
            S -= pq.top();
            pq.pop();
        }
    }

    cout << (int)pq.size();
}