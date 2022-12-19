#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Bir array tanımlayıp elemanlarını kullanıcıdan 
    //girmesini isteyiniz

    int sayilar[3];

    int i = 0;
    while(i<3)
    {
        scanf("%d",&sayilar[i]);
        i++;
    }

    i = 0;
    while (i<3)
    {
        printf("%d",sayilar[i]);
        i++;
    }
    
}