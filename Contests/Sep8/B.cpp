#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        vector<int> v, w;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
            {
                v.push_back(i);
            }
            else
            {
                w.push_back(i);
            }
        }

        if (v.size() == 1 || v.size() == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            char A[n][n];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    A[i][j] = '0';
                }
            }
            cout << "YES" << endl;

            int l = 0;

            for (int i = 0; i < n; i++)
            {
                if (v.size() > 1 && i == v[l])
                {
                    l++;
                    for (int j = 0; j < n; j++)
                    {
                        bool flag = true;
                        if (A[i][j] == '0')
                        {
                            for (int k = 0; k < w.size(); k++)
                            {
                                if (j == w[k])
                                {
                                    A[i][j] = '=';
                                    A[j][i] = '=';
                                    flag = false;
                                    break;
                                }
                            }
                        }
                        if (j == i)
                        {
                            A[i][j] = 'X';
                        }
                        else if (j == (v[l % v.size()]))
                        {
                            if (flag)
                            {
                                A[i][j] = '+';
                                A[j][i] = '-';
                            }
                        }
                        else
                        {
                            if (flag)
                            {
                                if (A[i][j] == '0')
                                {
                                    A[i][j] = '+';
                                    A[j][i] = '-';
                                }
                            }
                        }
                    }
                }
                else
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (i == j)
                        {
                            A[i][j] = 'X';
                        }
                        else
                        {
                            if (A[i][j] == '0')
                            {
                                A[i][j] = '=';
                                A[j][i] = '=';
                            }
                        }
                    }
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << A[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}