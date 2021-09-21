#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int check(char a[], int n)
{
    int i;
    bool f = false, u = false, l = false;
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            l = true;
        else if (a[i] >= 'A' && a[i] <= 'Z')
            u = true;
        else
            f = true;
        if (l == true && u == true && f == true)
            return 1;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (; t > 0; t--)
    {
        char a[101];
        int i, j, k, n;
        bool c = false;
        scanf("%s", a);
        n = strlen(a);
        if (check(a, n) == 1)
        {
            printf("%s\n", a);
            continue;
        }
        for (i = 0; i < n; i++)
        {
            char b[101];
            strcpy(b, a);
            b[i] = 'a';
            if (check(b, n) == 1)
            {
                c = true;
                printf("%s\n", b);
                break;
            }
            b[i] = 'Z';
            if (check(b, n) == 1)
            {
                c = true;
                printf("%s\n", b);
                break;
            }
            b[i] = '8';
            if (check(b, n) == 1)
            {
                c = true;
                printf("%s\n", b);
                break;
            }
        }
        if (c == true)
            continue;
        if (a[0] >= 'a' && a[0] <= 'z')
        {
            a[1] = 'Z';
            a[2] = '2';
            printf("%s\n", a);
        }
        else if (a[0] >= 'A' && a[0] <= 'Z')
        {
            a[1] = 'a';
            a[2] = '2';
            printf("%s\n", a);
        }
        else

        {
            a[1] = 'Z';
            a[2] = 'a';
            printf("%s\n", a);
        }
    }
}