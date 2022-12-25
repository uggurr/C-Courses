#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen bir kelimenin harflerini bir 
harf arttırarak yazan C programını yazınız

-- Kelime giriniz: Kelime
K
K e
K e l
K e l i
K e l i m
K e l i m e*/

int main()
{
    char a[50];
    int i,j;

    printf("Lutfen bir kelime giriniz: ");
    scanf("%c",&a);

    i = 0;
    
    while(a[i] != '\0')
    {
        j = 0;
        while(j <= i)
        {
            printf("%c",a[j]);
            j++;
        }
        printf("\n");
        i++;
    }
}