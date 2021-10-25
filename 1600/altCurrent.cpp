#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.length();
    stack<char> stk;
    for (int i = 0; i < n; i++)
    {
        if (!stk.size())
            stk.push(s[i]);
        else
        {
            if (s[i] != stk.top())
                stk.push(s[i]);
            else
                stk.pop();
        }
    }
    stk.size() ? cout << "No\n" : cout << "Yes\n";
    return 0;
}