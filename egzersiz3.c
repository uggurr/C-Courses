#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*aşağıdakileri içeren bir c programı yazınız:
    -İki boyutlu bir dizi oluşturun.
    -dizinin elemanları: bir iki uc dor ve bes olsun
    -Dizinin 4. elemanının 3. karakterini ekrana 
    bastırın.*/

    char dizi[5][5] = 
    {"bir","iki","uc","dort","bes"};

    printf("%c",dizi[3][2]);
    //Tek  bir karakter istendiği için %c kullandık.
}