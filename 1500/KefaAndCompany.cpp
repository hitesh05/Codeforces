#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const long long maxN = 1e5 + 5;

struct student
{
    long long m, s;

    student() {}
    student(long long m, long long s)
    {
        this->m = m;
        this->s = s;
    }
};

long long n, d, m, s, last_ind, part_sums[maxN], answer;
student students[maxN];

bool cmp(student a, student b)
{
    return a.m < b.m;
}
long long binary_search(long long target, long long beg)
{
    long long le = beg, ri = n - 1, mid, nearest_left = beg;

    while (le <= ri)
    {
        mid = (le + ri) / 2;

        if (students[mid].m > target)
            ri = mid - 1;
        else
        {
            le = mid + 1;
            nearest_left = mid;
        }
    }

    return nearest_left;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> d;
    for (long long i = 0; i < n; i++)
    {
        cin >> m >> s;
        students[i] = student(m, s);
    }

    sort(students, students + n, cmp);

    for (long long i = 0; i < n; i++)
    {
        if (i == 0)
            part_sums[i] = students[i].s;
        else
            part_sums[i] = part_sums[i - 1] + students[i].s;
    }

    for (long long i = 0; i < n; i++)
    {
        last_ind = binary_search(students[i].m + d - 1, i);
        if (part_sums[last_ind] - (i == 0 ? 0 : part_sums[i - 1]) > answer)
            answer = part_sums[last_ind] - (i == 0 ? 0 : part_sums[i - 1]);
    }

    cout << answer << endl;
    return 0;
}