#include <stdio.h>
#include <stdlib.h>

/*egzeriz 01 de yapılan egzersizi pointer kullanarak
yapiniz.*/

int cift_mi(int *a)
{
    if (*a % 2 == 0)
        return (1);
    return (0);
}

void bolunebilirlik(int *a, int *b)
{
    if(*b == 1 && *a % 3 == 0)
        printf("3'e ve 6'ya tam bolunur");
    else if (*a % 3 == 0)
        printf("3'e tam bolunur");
}

int main()
{
    int a,b,c;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&a);
    
    b = cift_mi(&a);
    if (b == 1)
        printf("girdiginiz sayi cifttir.\n");
    else 
        printf("girdiginiz sayi tektir.\n");
    bolunebilirlik(&a, &b);
}