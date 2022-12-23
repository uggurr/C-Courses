#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float r;

    do
    {
        printf("N Sayisini giriniz: ");
        scanf("%d",&n);
    } while (n<1);

    for (i = 1; i <= n; i++)
    {
        r += (float)1/i;
    }
    printf("Sonucunuz: %f",r);
}
