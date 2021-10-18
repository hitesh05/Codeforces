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

ll max_n = 1e5;
vector<bool> prime(max_n + 1, true);

void SieveOfEratosthenes(int n)
{
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    VI v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    SieveOfEratosthenes(max_n);

    int sum = accumulate(v.begin(), v.end(), 0);
    if (!prime[sum])
    {
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << ' ';
        }
        cout << endl;
        return;
    }

    int index;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] % 2 != 0)
        {
            index = i;
            break;
        }
    }
    cout << n - 1 << endl;
    for (int i = 0; i < n; i++)
    {
        if (i == index)
        {
            continue;
        }
        cout << i + 1 << ' ';
    }
    cout << endl;
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

/*
gdb a.out
b main
tui e
run < in1.txt
b solve
n
*/