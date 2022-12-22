#include <stdio.h>
#include <stdlib.h>

int kare(int i)
{
    int sonuc = i * i;
    return (i);
}


int main()
{
    int x = 4, karesi;

    karesi = kare(x);

    printf("%d", karesi);
}