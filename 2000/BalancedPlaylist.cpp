#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        priority_queue<double> p;
        int j = i;
        double m1;
        m1 = v[j];
        p.push(m1);
        j = ((j + 1) % (v.size()));

        int count = 1;
        while (1)
        {
            m1 = v[j];
            double m2 = p.top();

            if (count == 2 * v.size())
            {
                cout << -1 << ' ';
                break;
            }

            if (m1 < double(m2 / 2))
            {
                cout << count << ' ';
                break;
            }
            else
            {
                count++;
                p.push(m1);
                j = ((j + 1) % (v.size()));
            }
        }
    }
    cout << endl;
}