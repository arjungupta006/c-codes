#include <stdio.h>
#include <math.h>

int prime(int x)
{
    if (x < 2)
        return 0;
    int limit = (int)sqrt(x);
    for (int i = 2; i <= limit; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, c = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (prime(a[i]))
            c++;
    }

    printf("%d\n", c);
    return 0;
}
