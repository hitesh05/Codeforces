#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

bool comp(int a, int b)
{
    return (a < b);
}

int main()
{
    quick

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> zero, one;
        int *ans = new int[n];

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zero.push_back(i);
            }
            else
            {
                one.push_back(i);
            }
        }

        int count = 1;
        int max = 1;
        int index;

        int a = zero.size();
        int b = one.size();
        int z;
        if (a < b)
        {
            z = b;
        }
        else
        {
            z = a;
        }

        for (int i = 0; i < z; i++)
        {
            if (i < a)
            {
                if (i != 0)
                {
                    if (zero[i] == zero[i - 1] + 1)
                    {
                        count++;
                    }
                    else
                    {
                        if (i > b)
                        {
                            if (ans[zero[i - 1]] == count)
                            {
                                count--;
                            }
                        }
                        else
                        {
                            if (ans[zero[i - 1]] == count && ans[one[i - 1]] != count)
                            {
                                count--;
                            }
                        }
                    }
                }
                index = zero[i];
                ans[index] = count;
                if (count > max)
                {
                    max = count;
                }
            }

            if (i < b)
            {
                if (i != 0)
                {
                    if (one[i] == one[i - 1] + 1)
                    {
                        if (i < a && ans[zero[i]] == count && ans[one[i - 1]] != count)
                        {
                            count = ans[zero[i]];
                        }
                        else
                        {
                            count++;
                        }
                        //count++;
                    }
                }
                index = one[i];
                ans[index] = count;
                if (count > max)
                {
                    max = count;
                }
            }
        }

        cout << max << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << endl;

        delete[] ans;
    }
}