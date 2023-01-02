#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define KOKUC 1.73205

/*Kenar uzunlukları birbirinden farklı üçgenin 
ve eşkenar üçgenin alanını bulan C programını 
fonksiyon kullanarak yazınız
*/
void eskenarUcgen()
{
    float s;
    float alan;
    printf("Eskenar Ucgenin kenar uzunlugunu giriniz: ");
    scanf("%f",&s);

    alan = ((s * s) * KOKUC) / 4;
    printf("%.3f",alan);
}
void cesitkenarUcgen()
{
    float s;
    float alan;
    float a,b,c;
    printf("Ucgenin kenar uzunluklarini giriniz: ");
    scanf("%f%f%f",&a,&b,&c);

    s = (a + b + c) / 2;
    alan = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%.3f",alan);

}

int main()
{
    char a;
    printf("Alanini hesaplamak istediginiz ucgen;\n");
    printf("Eskenar ucgense 'E', Cesitkenar ucgense 'C', Ikiz kenar ucgense 'I' ");
    printf("Tusuna basiniz: ");
    scanf("%c",&a);
    
    if (a == 'E' || a == 'e')
        eskenarUcgen();
    else if ((a == 'C' || a == 'c') || (a == 'I' || a == 'i'))
        cesitkenarUcgen();
    else
        printf("Yanlis bir tuslama yaptiniz...");
}