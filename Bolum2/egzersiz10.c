#include <stdio.h>
#include <stdlib.h>

/*while döngüsü kullanarak 0 ile kullanıcıdan aldığı
n sayısı arasında yer alan 17 nin tüm tam sayı
katlarını ekrana bastıran bir program yazınız.
her satırda 10 adet sayı olacak şekilde ekrana bastırın*/

int main()
{
    int n;
    int i,j;
    printf("Lutfen bir adet limit degeri giriniz: ");
    scanf("%d",&n);

    j = 0;
    i = 0;
    while (i < n)
    {
        printf("%4d",i);
        i += 17;
        j++;
        if (j % 10 == 0)
        {
            printf("\n");
        }
        
    }
    
}