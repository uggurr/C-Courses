#include <stdio.h>
#include <stdlib.h>

/*bir arabanın gittiği yolu mil cinsinden girdi olarak
alan ve bu km ye çeviren c proframını yazınız 
1 mil = 1.609 km*/

int main()
{
    float mil,km,result;

    printf("Lutfen mil uzunlugunu giriniz: ");
    scanf("%f",&mil);

    km = 1.609;
    result = mil * km;
    printf("%.0f mil = %.3f km dir",mil,result);
}