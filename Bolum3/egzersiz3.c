#include <stdio.h>
#include <stdlib.h>


/*Aşağıda belirtilen işlemleri yapan bir C programı yazınız
- Toplama veya çıkarma operatörü giriniz
- Toplama operatörü için 1/a-1/b işlemlerin sonucunu
basit kesir cinsinden bulunuz.
girilen a veya b değerlerinden biri 0 ise işlemin
yapılacağını bir mesaj ile belirtiniz.*/

int main()
{
    char a;
    int num1,num2;
    int pay,payda;

    printf("Lutfen bir operator giriniz(+,-): ");
    scanf("%c",&a);

    printf("Lutfen iki adet tam sayi giriniz: ");
    scanf("%d%d",&num1,&num2);

    if (num1 == 0 || num2 == 0)
        printf("Payda 0 girilemez.");
    else
    {
        switch (a)
        {
        case '+':
            if (num1 == num2)
            {
                if (num1 == 2)
                {
                    printf("1/%d %c 1/%d = 2/%d = 1",num1,a,num2,num1);
                    break;
                }
                printf("1/%d %c 1/%d = 2/%d",num1,a,num2,num1);
            }
            else
            {
                payda = num1 * num2;
                pay = num1 + num2;
                printf("1/%d %c 1/%d = %d/%d",num1,a,num2,pay,payda);
            }
            break;
        case '-':
            if (num1 == num2)
                printf("1/%d %c 1/%d = 0/%d = 0",num1,a,num2,num1);
            else
            {
                payda = num1 * num2;
                pay = num2 - num1;
                printf("1/%d %c 1/%d = %d/%d",num1,a,num2,pay,payda);
            }
            break;
    
        default: printf("Lutfen belirtilen operatorlerden birini giriniz.");
            break;
        }
    }
}