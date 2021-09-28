#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long int ll;

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int index[26];
        for (int i = 0; i < 26; i++)
        {
            index[i] = -1;
        }
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            index[c - 'a'] = i;
        }

        // for(int i=0;i<s.size();i++){
        //     cout << index[i] << " ";
        // }
        // cout << endl;

        bool flag = false;
        if (index[0] == -1)
        {
            flag = true;
        }
        int l = index[0], r = index[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (index[i] == -1)
            {
                flag = true;
                break;
            }
            
            if (index[i] == l - 1)
            {
                l--;
            }
            else if (index[i] == r + 1)
            {
                r++;
            }
            else
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}