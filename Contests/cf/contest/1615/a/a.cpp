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

    VI v(n);
    for(auto &i:v){
        cin>>i;
    }

    int sum = accumulate(v.begin(),v.end(),0);
    if(sum%n==0){
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    return;
    // priority_queue<int> p;
    // priority_queue<int, vector<int>, greater<int>> q;

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     p.push(x);
    //     q.push(x);
    // }

    // int a = p.top();
    // int b = q.top();

    // if (a == b)
    // {
    //     cout << 0 << endl;
    //     return;
    // }

    // while (1)
    // {
    //     int a = p.top();
    //     int b = q.top();

    //     if (a == b)
    //     {
    //         cout << 0 << endl;
    //         return;
    //     }

    //     if (a - b == 1)
    //     {
    //         cout << 1 << endl;
    //         return;
    //     }

    //     p.pop();
    //     q.pop();
    //     a--;
    //     b++;
    //     p.push(a);
    //     q.push(b);
    // }
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