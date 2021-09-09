#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vll;
typedef pair<long long, long long> pll;
typedef vector<vector<long long>> mll;
typedef vector<pair<long long, long long>> vpl;
typedef long double ld;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int length;
        string s;

        cin >> length;
        cin >> s;

        int l = 0, r = length - 1;
        int numA = 0, numB = 0;

        for (int i = 0; i < length; i++)
        {
            if (s[i] == 'a')
            {
                numA += 1;
            }
            else
            {
                numB += 1;
            }
        }
        bool flag = false;

        while (l < r)
        {
            if (numA > numB)
            {
                if (s[l] == 'a')
                {
                    l++;
                    numA -= 1;
                }
                else if (s[r] == 'a')
                {
                    r--;
                    numA -= 1;
                }
                else
                {
                    l++;
                    numB -= 1;
                }
            }
            else if (numB > numA)
            {
                if (s[l] == 'b')
                {
                    l++;
                    numB -= 1;
                }
                else if (s[r] == 'b')
                {
                    r--;
                    numB -= 1;
                }
                else
                {
                    l++;
                    numA -= 1;
                }
            }
            else
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << l + 1 << " " << r + 1 << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }

    return 0;
}