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

        string ans;
        

        for (int i = 0; i < n;)
        {
            if (s[i] == 'U')
            {
                ans.push_back('D');
                i++;
            }
            else if (s[i] == 'D')
            {
                ans.push_back('U');
                i++;
            }
            else
            {
                ans.push_back('L');
                ans.push_back('R');
                i += 2;
            }
        }

        cout << ans << endl;
    }
}