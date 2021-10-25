// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// #define quick                         \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(0);

// typedef long long int ll;

// using PII = pair<int, int>;
// using VI = vector<int>;
// #define fs first
// #define ss second
// #include <bits/stdc++.h>
// using namespace std;

// int lps(string s, int i, int j)
// {
//     if (i >= j)
//     {
//         return 0;
//     }
//     if (s[i] == s[j])
//     {
//         return lps(s, i + 1, j - 1);
//     }

//     return 1 + min(lps(s, i + 1, j), lps(s, i, j - 1));
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     int l = lps(s, 0, n - 1);

//     VI v(26, 0);
//     for (int i = 0; i < n; i++)
//     {
//         int x = int(s[i] - 'a');
//         v[x]++;
//     }

//     int max = *max_element(v.begin(), v.end());

//     if (l > max)
//     {
//         cout << "l: " << l << " " << -1 << endl;
//         return;
//     }
//     cout << l << endl;
// }

// int main()
// {
//     quick

//         int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

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
#include <bits/stdc++.h>
using namespace std;

/* Returns LCS X and Y */
string lcs(string &X, string &Y)
{
    int m = X.length();
    int n = Y.length();

    int L[m + 1][n + 1];

    /* Following steps build L[m+1][n+1] in bottom
       up fashion. Note that L[i][j] contains
       length of LCS of X[0..i-1] and Y[0..j-1] */
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    // Following code is used to print LCS
    int index = L[m][n];

    // Create a string length index+1 and
    // fill it with \0
    string lcs(index + 1, '\0');

    // Start from the right-most-bottom-most
    // corner and one by one store characters
    // in lcs[]
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        // If current character in X[] and Y
        // are same, then current character
        // is part of LCS
        if (X[i - 1] == Y[j - 1])
        {
            // Put current character in result
            lcs[index - 1] = X[i - 1];
            i--;
            j--;

            // reduce values of i, j and index
            index--;
        }

        // If not same, then find the larger of
        // two and go in the direction of larger
        // value
        else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }

    return lcs;
}

// Returns longest palindromic subsequence
// of str
string longestPalSubseq(string &str)
{
    // Find reverse of str
    string rev = str;
    reverse(rev.begin(), rev.end());

    // Return LCS of str and its reverse
    return lcs(str, rev);
}

int lps(string s, int i, int j)
{
    if (i >= j)
    {
        return 0;
    }
    if (s[i] == s[j])
    {
        return lps(s, i + 1, j - 1);
    }

    return 1 + min(lps(s, i + 1, j), lps(s, i, j - 1));
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string s2 = longestPalSubseq(s);

    int ans = lps(s, 0, n - 1);

    // cout << "s2: " << s2 << endl;

    VI v(26, 0),w(26,0);
    for (int i = 0; i < n; i++)
    {
        int x = int(s[i] - 'a');
        v[x]++;
    }

    for(int i=0;i<s2.length();i++){
        int x = int(s2[i] - 'a');
        w[x]++;
    }

    int count =0;
    for(int i=0;i<26;i++){
        if(v[i]!=w[i]){
            count++;
        }
    }
    if(count>1){
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;



    // int max = *max_element(v.begin(), v.end());

    // if (ans > max || l == 0)
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    // cout << ans << endl;
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