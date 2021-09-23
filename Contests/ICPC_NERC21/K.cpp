#include <bits/stdc++.h>

using namespace std;

#define MP make_pair

set<pair<int, int>> pos;

bool simulate(pair<int, int> ob, const string &s)
{
    int prvx = 0, prvy = 0;
    int curx = 0, cury = 0;
    for (auto &z : s)
    {
        prvx = curx;
        prvy = cury;
        if (z == 'L')
            --curx;
        else if (z == 'R')
            ++curx;
        else if (z == 'D')
            --cury;
        else if (z == 'U')
            ++cury;
        if (MP(curx, cury) == ob)
        {
            curx = prvx;
            cury = prvy;
        }
    }
    return (curx == 0 && cury == 0);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        pos.clear();
        int curx = 0, cury = 0;
        for (auto &z : s)
        {
            if (z == 'L')
                --curx;
            else if (z == 'R')
                ++curx;
            else if (z == 'D')
                --cury;
            else if (z == 'U')
                ++cury;
            pos.insert({curx, cury});
        }
        pos.erase({0, 0});
        assert(curx != 0 or cury != 0);
        int ansx = 0, ansy = 0;
        for (auto &p : pos)
        {
            if (simulate(p, s))
            {
                ansx = p.first;
                ansy = p.second;
            }
        }
        cout << ansx << " " << ansy << endl;
    }
    return 0;
}