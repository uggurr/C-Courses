#include <stdio.h>
#include <stdlib.h>

/*Pointer: Addres tutan değişkenlere pointer denir.
-Pointer'ın türü işaret ettiği değişkenin türünü anla-
mamızı sağlar.
int* türündeki bir pointer int türünde bir değişkeni
işaret eder.
variable pointed: Pointer'ın adresini tuttuğu değişken.
*/

int main()
{
    int a = 10;
    int *p;

    p = &a;
    printf("p nin degeri: %d\n",*p);
    printf("p nin tuttugu adres: %d\n",p);
    printf("a'nin degeri: %d\n",a);
    printf("a'nin tuttugu adres: %d\n",&a);

    printf("---------------------------\n");
    int *num;
    int n;
    n = 20;
    printf("Degeri atamadan once\n");
    printf("%d\n",n);
    num = &n;
    printf("Pointer ile n nin adresine Degeri atadiktan sonra\n");
    *num = 30;
    printf("%d",n);


}