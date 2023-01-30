#include <stdio.h>
#include <stdlib.h>

/*Farklı datatypelar için değişken tanımlayıp değer
ataması yapınız. Hem bu değişkenleri hem de bellekte 
tuttukları adresleri ekrana yazdırınız.*/

int main()
{
    int a;
    char b;
    float c;
    double e;

    a = 1;
    b = 'a';
    c = 1.4;
    e = 2.4;

    printf("%d\n",&a);
    printf("%d\n",a);
    printf("%d\n",&b);
    printf("%c\n",b);
    printf("%f\n",c);
    printf("%d\n",&c);
    printf("%lg\n",e);
    printf("%d\n",&e);

}