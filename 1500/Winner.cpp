#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef pair<int, vector<pair<int, int>>> ps;
#define ff first
#define ss second
#define pb push_back

int main()
{
    quick

        int n;
    cin >> n;
    int max = 0;
    unordered_map<string, ps> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;

        if (mp.count(s) > 0)
        {
            ps z = mp.at(s);
            mp.erase(s);
            z.ff += x;
            pair<int, int> k;
            k = make_pair(z.ff, i);
            z.ss.push_back(k);
            pair<string, ps> p;
            p = make_pair(s, z);
            mp.insert(p);
        }
        else
        {
            ps z;
            z.ff = x;
            pair<int, int> k;
            k = make_pair(x, i);
            z.ss.push_back(k);
            pair<string, ps> p;
            p = make_pair(s, z);
            mp.insert(p);
        }
    }

    vector<pair<string, vector<pair<int, int>>>> ans;
    unordered_map<string, ps>::iterator it;
    it = mp.begin();

    while (it != mp.end())
    {
        if (it->second.first > max)
        {
            max = it->second.first;
        }

        it++;
    }
    // cout << max << endl;

    it = mp.begin();
    while (it != mp.end())
    {
        if (it->second.first == max)
        {
            pair<string, vector<pair<int, int>>> p;
            p.ff = it->first;
            p.ss = it->second.second;
            ans.push_back(p);
            // cout << p.ff << endl;
            // for (int i = 0; i < p.ss.size(); i++)
            // {
            //     cout << p.ss[i].ff << " " << p.ss[i].ss << endl;
            // }
        }

        it++;
    }

    string s1;
    int ind1 = INT_MAX;

    for (int i = 0; i < ans.size(); i++)
    {
        // cout << ans[i].ff << endl;
        // for (int j = 0; j < ans[i].second.size(); j++)
        // {
        //     cout << ans[i].ss[j].ff << ans[i].ss[j].ss << endl;
        // }
        vector<pair<int, int>> test = ans[i].ss;
        for (int j = 0; j < test.size(); j++)
        {
            if (test[j].ff >= max)
            {
                if (test[j].ss < ind1)
                {
                    ind1 = test[j].ss;
                    s1 = ans[i].ff;
                    break;
                }
            }
        }
    }

    cout << s1 << endl;
}