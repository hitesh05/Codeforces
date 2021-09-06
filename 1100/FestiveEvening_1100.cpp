#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

unordered_map<char, int> last_pos;
unordered_set<char> active;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    for (int i = 0; i < n; i++) {
        last_pos[s[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        active.insert(s[i]);
        if (active.size() > k) {
            cout << "YES" << endl;
            return 0;
        }
        if (last_pos[s[i]] == i)
            active.erase(s[i]);
    }

    cout << "NO" << endl;
    return 0;
}