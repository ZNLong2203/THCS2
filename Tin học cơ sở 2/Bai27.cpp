#include <stdio.h>
#include <math.h>
int nguyento(int n)
{
    int i;
    for (i = 2; i <=sqrt(n); i++)
        if (n%i == 0 && n != i && n>1)
        {
            return 1;
            break;
        }
}
int main()
{
    int i, n, kt;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
        if (nguyento(i) != 1)
            printf("%d\n", i);
    return 0;
}
