#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef long long int ll;

using PII = pair<int, int>;
using VI = vector<int>;
#define fs first
#define ss second

void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    if (s1[0] == '1')
    {
        cout << "NO" << endl;
        return;
    }
    if ((*(s2.rbegin())) != '0')
    {
        cout<< "NO"<<endl;return;
    }

    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '1' && s2[i] == '1')
        {
            cout << "NO" << endl;
            return;
        }
    }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (s2[i + 1] == '1')
    //     {
    //         if (s1[i] == '1')
    //         {
    //             if (s1[i + 1] == '1')
    //             {
    //                 cout << "NO" << endl;
    //                 return;
    //             }
    //         }
    //     }
    // }

    cout << "YES" << endl;
}

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}