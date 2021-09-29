#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define quick                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

typedef std::vector<int> vi;

#include <bits/stdc++.h>
using namespace std;

unsigned int onesComplement(unsigned int n)
{
    int number_of_bits = floor(log2(n)) + 1;
    return ((1 << number_of_bits) - 1) ^ n;
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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cout << onesComplement(x) << " ";
        }
        cout << endl;
    }
}