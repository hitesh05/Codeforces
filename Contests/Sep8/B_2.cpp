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

        char exp[n];
        vector<int> exp_2;
        char c;
        char m[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                m[i][j] = '0';
            }
        }
        int num1 = 0;
        int num2 = 0;

        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> c;
            exp[i] = c;
            if (c == '1')
            {
                num1++;
            }
            else
            {
                num2++;
                exp_2.push_back(i);
            }
        }
        if ((num1 > num2 && num2 != 0) || num2 == 2 || (num2 == 1 && num1 == 1))
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            if (num2 != 0)
            {
                for (int i = 0; i < exp_2.size() - 1; i++)
                {
                    m[exp_2[i]][exp_2[i + 1]] = '+';
                    m[exp_2[i + 1]][exp_2[i]] = '-';
                }
                for (int i = 0; i < n; i++)
                {
                    if (exp[i] == '1')
                    {
                        for (int j = 0; j < n; j++)
                        {

                            if (exp[j] != '1')
                            {
                                m[i][j] = '+';
                                m[j][i] = '-';
                            }
                        }
                    }
                }

                m[exp_2[0]][exp_2[exp_2.size() - 1]] = '-';
                m[exp_2[exp_2.size() - 1]][exp_2[0]] = '+';
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    cout << "X";
                }
                else if (m[i][j] == '+')
                {
                    cout << "+";
                }
                else if (m[i][j] == '-')
                {
                    cout << "-";
                }
                else
                {
                    cout << "=";
                }
            }
            cout << endl;
        }
    }
    return 0;
}