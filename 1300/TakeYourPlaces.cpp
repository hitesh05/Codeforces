#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long int ll;

typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;

#define pb push_back
#define all(s) s.begin(), s.end()
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    tc
    {
        ll i, j, k, n, odd = 0, even = 0;
        cin >> n;
        vi vec, arr, arr1;
        vector<pair<ll, ll>> evens, odds;
        for (i = 0; i < n; i++)
        {
            cin >> j;
            if (j % 2 == 0)
            {
                even++;
                evens.pb({j, i});
            }
            else
            {
                odd++;
                odds.pb({j, i});
            }
            vec.pb(j);
        }
        if (abs(odd - even) >= 2)
        {
            cout << -1 << "\n";
            continue;
        }
        i = 0, j = 0, k = 0;
        if (even == odd)
        {

            for (i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    arr.pb(evens[k].first);
                    k++;
                }
                else
                {
                    arr.pb(odds[j].first);
                    j++;
                }
            }
            k = 0, j = 0;
            for (i = 0; i < n; i++)
            {
                if (i % 2 == 1)
                {
                    arr1.pb(evens[k].first);
                    k++;
                }
                else
                {
                    arr1.pb(odds[j].first);
                    j++;
                }
            }
        }
        else if (even > odd)
        {
            for (i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    arr.pb(evens[k].first);
                    k++;
                }
                else
                {
                    arr.pb(odds[j].first);
                    j++;
                }
            }
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (i % 2 == 1)
                {
                    arr.pb(evens[k].first);
                    k++;
                }
                else
                {
                    arr.pb(odds[j].first);
                    j++;
                }
            }
        }
        ll sum = 0;
        k = 0;
        for (i = 0; i < n; i += 2)
        {
            if (arr[i] % 2 == 0)
            {
                sum += abs(i - evens[k].second);
                k++;
            }
            else
            {
                sum += abs(i - odds[k].second);
                k++;
            }
        }
        if (even == odd)
        {
            k = 0;
            ll count = 0;
            for (i = 0; i < n; i += 2)
            {
                if (arr1[i] % 2 == 0)
                {
                    count += abs(i - evens[k].second);
                    k++;
                }
                else
                {
                    count += abs(i - odds[k].second);
                    k++;
                }
            }
            sum = min(sum, count);
        }
        cout << sum << "\n";
    }
}