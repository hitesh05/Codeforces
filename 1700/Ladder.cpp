#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;

void solve1(vector<int> v, int s, int e)
{
    //cout << 1 << endl;
    int in1 = -1, in2 = -1;
    int a = s + 1, b = e - 1;
    bool f1 = false, f2 = false;
    while (a <= e && b >= s)
    {
        //cout << 1 << endl;
        if (v[a] >= v[a - 1])
        {
            a++;
        }
        else
        {
            //cout << "a: " << a << endl;
            if (in1 == -1)
            {
                in1 = a - 1;
            }
            f1 = true;
        }

        if (v[b] >= v[b + 1])
        {
            b--;
        }
        else
        {
            //cout << "b: " << b << endl;
            if (in2 == -1)
            {
                in2 = b + 1;
            }
            f2 = true;
        }

        if (f1 && f2)
        {
            break;
        }
    }

    if (in1 == in2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

bool solve2(vector<int> v, int s, int e, bool inc)
{
    if (inc)
    {
        for (int i = s + 1; i <= e; i++)
        {
            if (v[i] < v[i - 1])
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        for (int i = s + 1; i <= e; i++)
        {
            if (v[i] > v[i - 1])
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    quick

        int n,
        m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        int s, e;
        cin >> s >> e;
        s--;
        e--;
        bool f1 = v[s + 1] >= v[s];
        bool f2 = v[e - 1] >= v[e];
        // cout << f1 << " " << f2 << endl;

        if(s==e){
            cout << "Yes" << endl; 
        }
        else if (!f1 && !f2)
        {
            cout << "No" << endl;
        }
        else if (f1 && f2)
        {
            //cout << 1 << endl;
            solve1(v, s, e);
        }
        else
        {
            bool inc = false;
            if (f1 && !f2)
            {
                inc = true;
            }

            if (solve2(v, s, e, inc))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}