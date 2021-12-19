#include <stdio.h>
#include <bits/stdc++.h>

#define ios                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int, int> pi;
typedef map<int, int> mii;

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        vi pp(0);
        vi nn(0);
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            int bufi;
            scanf("%d", &bufi);
            if (bufi > 0)
            {
                mx = max(mx, bufi);
                pp.push_back(bufi);
            }
            else
            {
                mx = max(mx, -bufi);

                nn.push_back(-bufi);
            }
        }

        sort(pp.begin(), pp.end());
        sort(nn.begin(), nn.end());
        ll l = 0;

        while (pp.size() >= k)
        {
            l += pp[pp.size() - 1];
            for (int i = 0; i < k; i++)
            {
                pp.pop_back();
            }
        }

        while (nn.size() >= k)
        {
            l += nn[nn.size() - 1];
            for (int i = 0; i < k; i++)
            {
                nn.pop_back();
            }
        }

        if (nn.size() != 0)
        {
            // mx = max(mx, nn[0]);
            l += nn[nn.size() - 1];
        }

        if (pp.size() != 0)
        {
            // mx = max(mx, pp[0]);
            l += pp[pp.size() - 1];
        }
        l *= 2;
        // printf("[]:%d\n", mx);
        l -= mx;

        printf("%lld\n", l);
    }
}