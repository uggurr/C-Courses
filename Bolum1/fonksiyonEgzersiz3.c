#include <stdio.h>
#include <stdlib.h>

void ussunu_al(int x,int y, int *r)
{
    int i;

    *r = 1;
    i = 0;
    while(i < y)
    {
        *r = x * *r;
        i++;
    }
}


int main()
{
    int x,y,r;

    x = 4;
    y = 5;

    ussunu_al(x,y,&r);
    printf("%d",r);
}