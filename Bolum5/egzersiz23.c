#include <stdio.h>
#include <stdlib.h>

/*aşağıdaki şekli ekrana foksiyon ile yazdıran C 
programını yazınız.

*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
**********

*/

void kelebek(int n)
{
    int i,j,k;
    int yildiz,bosluk;
    i = 0;
    yildiz = (n * 2) - 1;
    bosluk = 0;
    while(i < n)
    {
        j = 0;
        while(j < bosluk)
        {
            printf(" ");
            j++;
        }
        k = 0;
        while (k < yildiz)
        {
            printf("*");
            k++;
        }
        printf("\n");
        bosluk++;
        yildiz -= 2;
        i++;
    }

    i = 0;
    yildiz = 1;
    bosluk = n - 1;
    while(i < n)
    {
        
        j = 0;
        while(j < bosluk)
        {
            printf(" ");
            j++;
        }
        k = 0;
        while (k < yildiz)
        {
            printf("*");
            k++;
        }
        printf("\n");
        bosluk--;
        yildiz+= 2;
        i++;
    }
}

int main()
{
    int n;

    printf("Lutfen satir sayisi giriniz: ");
    scanf("%d",&n);

    kelebek(n);
}