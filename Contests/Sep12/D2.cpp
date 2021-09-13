#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pp;
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
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (int i = 0; i < n * m; i++)
        {
            pair<int, int> p;
            int x;
            cin >> x;
            p.first = x;
            p.second = i;
            pq.push(p);
        }

        int ans[n][m];
        int index1 = 0;
        int index2 = 0;
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
                sort(v.begin(), v.end(), greater<int>());

                for (int i = 0; i < v.size(); i++)
                {
                    ans[index1][index2] = v[i];
                    index2 = (index2 + 1) % n;
                    if (index2 == 0)
                    {
                        index1++;
                    }
                }
                v.clear();
            }
        }
        sort(v.begin(), v.end(), greater<int>());

        for (int i = 0; i < v.size(); i++)
        {
            ans[index1][index2] = v[i];
            index2 = (index2 + 1) % n;
            if (index2 == 0)
            {
                index1++;
            }
        }
        v.clear();

        // for (int i = 0; i < n; i++)
        // {
        //     cout << ans[i] << ' ';
        // }

        // for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << ans[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        int count = 0;

        for (int z = 0; z < m; z++)
        {
            for (int i = 1; i < n; i++)
            {
                for (int j = i; j >= 0; j--)
                {
                    if (ans[z][j] < ans[z][i])
                    {
                        count++;
                    }
                }
            }
        }

        cout << count << endl;
        //cout << endl;
    }
}