#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 0'dan 10'a kadar olan  çift sayıları for ile
    ekrana bastırma*/

    // for(int i = 0; i <= 10; i++)
    // {
    //     if(i%2 == 0)
    //     {
    //         printf("%d ",i);
    //     }
    // }

    for (int j = 0; j <= 10; j += 2)
    {
        printf("%d ",j);
    }
    
}