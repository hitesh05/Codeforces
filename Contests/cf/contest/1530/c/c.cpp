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
    VI a(n, 0);
    VI b(n, 0);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll sumA = 0, sumB = 0;
    for (int i = n - 1; i >= n / 4; i--)
    {
        sumA += a[i];
        sumB += b[i];
    }

    ll count = 0;
    ll index = n / 4;
    ll index2 = n / 4 - 1;
    ll len = n;
    while (1)
    {
        if (sumA >= sumB)
            break;
        sumA += 100;
        count++;
        len++;
        if (len % 4 == 0)
        {
            if (index >= n)
                sumA -= 100;
            else
                sumA -= a[index];
            index++;
        }
        if (index2 >= 0 && len % 4 != 0)
        {
            sumB += b[index2];
            index2--;
        }
    }
    cout << count << endl;
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