#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool *a = new bool[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = false;
    }

    int count = 0;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int i = 0;

    while (!q.empty() && i < v.size())
    {
        int y = q.front();
        if (a[y - 1])
        {
            q.pop();
        }
        else
        {
            int x = v[i];
            if (x != y)
            {
                count++;
                a[x - 1] = true;
            }
            else
            {
                q.pop();
            }

            i++;
        }
    }

    cout << count << endl;

    delete[] a;
}