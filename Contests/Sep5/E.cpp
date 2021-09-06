#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countNonIncreasing(int *arr, int l, int r)
{
    int cnt = 0;
    int len = 0;

    for (int i = l; i <= r; ++i)
    {
        if (arr[i + 1] >= arr[i])
            len++;

        else
        {
            cnt += (((len + 1) * len) / 2);
            len = 0;
        }
    }

    if (len >= 1)
        cnt += (((len + 1) * len) / 2);

    cnt += r - l + 1;

    return cnt;
}

int main()
{
    int n, q;
    cin >> n >> q;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            arr[b - 1] = c;
        }
        else
        {
            int ans = countNonIncreasing(arr, b - 1, c - 1);
            cout << ans << endl;
        }
    }

    delete[] arr;
}
