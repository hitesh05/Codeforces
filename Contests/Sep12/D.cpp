#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;

        //vector<int> eyes(n);
        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < n; i++)
        {
            pair<int, int> p;
            int x;
            cin >> x;
            p.first = x;
            p.second = i;
            pq.push(p);
        }

        int *ans = new int[n];
        int index = n - 1;
        vector<int> v;

        while (!pq.empty())
        {
            pair<int, int> p1 = pq.top();
            pq.pop();

            pair<int, int> p2 = pq.top();
            if (p1.first == p2.first)
            {
                v.pb(p1.second);
            }
            else
            {
                v.pb(p1.second);
                sort(v.begin(), v.end());

                for (int i = 0; i < v.size(); i++)
                {
                    ans[index] = v[i];
                    index--;
                }
                v.clear();
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            sort(v.begin(), v.end());
            ans[index] = v[i];
            index--;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << ans[i] << ' ';
        // }
        int count = 0;

        for (int i = 1; i < n; i++)
        {
            for (int j = i; j >= 0; j--)
            {
                if (ans[j] < ans[i])
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
}