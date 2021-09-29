#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>> heap;
    set<int> elements;
    int q;
    cin >> q;
    int total = 1;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int b;
            cin >> b;
            heap.push({b, -total});
            elements.insert(total);
            total++;
        }
        else if (a == 2)
        {
            int first_ = *elements.begin();
            cout << first_ << " ";
            elements.erase(first_);
        }
        else
        {
            pair<int, int> biggest;
            while (1)
            {
                biggest = heap.top();
                heap.pop();
                if (elements.find(-biggest.second) != elements.end())
                    break;
            }
            cout << -biggest.second << " ";
            elements.erase(-biggest.second);
        }
    }
    cout << endl;
}