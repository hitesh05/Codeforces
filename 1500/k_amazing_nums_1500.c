#include <stdio.h>
#include <stdlib.h>

#define SIZE 300007

void readArray(int Arr[], int n)
{
    for (int i = 0 : i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }
}

int main(void)
{
    int test_cases;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        int num_elems;
        scanf("%d", num_elems);

        int *Arr = (int *)malloc(SIZE * sizeof(int));
        readArray(Arr, num_elems);
    }
}