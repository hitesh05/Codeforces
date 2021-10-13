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
    string s1, s2;
    cin >> s1 >> s2;
    int a = 0, b = 0, c = 0, d = 0;
    int count = 0;
    int n = s1.size();

    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[i])
        {
            count++;
        }
        else
        {
            if (s1[i] == '4')
            {
                a++;
            }
            if (s2[i] == '4')
            {
                c++;
            }
        }
    }
    b = n - count - a;
    d = n - count - c;

    int swaps = min(a, b);
    count += 2 * swaps;

    cout << swaps + n - count << endl;
    return;
}

int main()
{
    quick

    solve();

    return 0;
}