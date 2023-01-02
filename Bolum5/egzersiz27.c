#include <stdio.h>
#include <stdlib.h>

/*kullanıcının girdiği sayiya kadar olan sayilarin
karesinin toplamını veren C programını fonksiyon 
kullanarak yazınız.örn;
n = 4
1^2 + 2^2 + 3^2 + 4^2
*/

int hesapla(int n)
{
    int i;
    int result;
    i = 1;
    while (i <= n)
    {
        result += i * i;
        i++; 
    }
    return result;
}

int main()
{
    int n,s;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&n);

    s = hesapla(n);
    printf("Islem sonucu = %d",s);
}