#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            x = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", x - a[i]);
    }

    return 0;
}
