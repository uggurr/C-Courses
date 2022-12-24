#include <stdio.h>
#include <stdlib.h>

/*Bir üçgenin açılarını girdi olarak alan ve bu 
üçgenin eşit kenar, ikiniz kenar, çeşitkenar üçgen 
olup olmadığını belirleyen bir C programı yazınız. 
Açıların üçgen oluşturup oluşturamadığı da kontrol 
edilmelidir.*/

int main()
{
    int a,b,c;

    printf("Uc aci giriniz: ");
    scanf("%d%d%d",&a,&b,&c);
    
    if (a + b +c == 180)
    {
        if((a == b) && (a == c) && (b == c))
            printf("Eskenar ucgen");
        else if ((a != b) && (b != c) && (a != c))
            printf("Cesitkenar Ucgen");
        else if((a == b) || (b == c) || (a == c))
            printf("Ikiz kenar ucgen");
        
    }
    else
        printf("ic acilari toplami 180 olmalidir");
    
}