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
    int n, k;
    cin >> n >> k;

    vector<vector<int>> graph(n + 1);
    VI ch;
    VI children(n, 0);

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        children[a - 1]++;

        if(a==1){
            ch.push_back(b);
        }
    }

    ll ans = 0;
    if (children[0] <= k)
    {
        int x = int(n / 2);
        int y = n - x;
        cout << x * y << endl;
        return;
    }


    for(int i=0;i<graph[1].size();i++){
        int node = graph[1][i];
    }

    // VI children2;
    // for(int i=1;i<children.size();i++){
    //     children2.push_back(children[i]);
    // }

    // sort(children2.begin(), children2.end());
    // int blue = 0;
    // for (int i = 0; i < n-k; i++)
    // {
    //     blue += children[i];
    // }
    // int red = k;
    // int white = n - blue - red;

    // ans = white * (red - blue);

    // cout << ans << endl;
}

int main()
{
    quick

    solve();

    return 0;
}