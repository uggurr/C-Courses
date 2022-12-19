#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kullanıcının gireceği operetör ve 
    kullanıcının gireceği iki sayinin girilen 
    operatöre göre hesaplanması. Switch-Case ile*/

    char operator;
    float num1,num2;

    printf("Lutfen bir operator giriniz: ");
    scanf("%c",&operator);

    printf("lutfen 1inci sayiyi giriniz: ");
    scanf("%f",&num1);

    printf("Lutfen 2inci sayiyi giriniz: ");
    scanf("%f",&num2);

    switch(operator)
    {
        case '+': printf("%.2f + %.2f = %.2f", num1,num2,(num1+num2));
        break;
        case '-': printf("%.2f - %.2f = %.2f", num1,num2,(num1-num2));
        break;
        case '*': printf("%.2f * %.2f = %.2f", num1,num2,(num1*num2));
        break;
        case '/': printf("%.2f / %.2f = %.2f", num1,num2,(num1/num2));
        break;

        default: printf("Hatali secim yaptiniz...");
        break;
    }

   
}