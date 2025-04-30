#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int x;
    int zero = 0;
    int one = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            zero++;
        }
        else if (x == 1)
        {
            one++;
        }
    }

    printf("%d %d", zero, one);

    return 0;
}
