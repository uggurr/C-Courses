#include <stdio.h>
#include <stdlib.h>
#define tam 150
/*bir sınıfta bulunan öğrencilerden hangisinin 
boyunun 150 cm ye yakın olduğunu hesaplayan bir 
program yazınız. Bu program öğrenci numaralarını ve 
cm cinsinden boy uzunlukluklarını girdi olarak 
almalıdır. Öğrenci no ve boy eksi değer girilene
kadar devam etmelidir */

int main()
{
    int no, boy, fark, minno, minboy;
 
    printf("Ogrenci no ve boy gir: ");
    scanf("%d %d",&no,&boy);
 
    minno=no;
    minboy=boy;
    fark=abs(boy-tam);
 
    while(no>0)
    {
        printf("Ogrenci no ve boy gir: ");
        scanf("%d %d",&no,&boy);
        if(no<=0)
        {
            break;
        }
 
        if(abs(boy-tam)<fark)
        {
            fark=abs(boy-tam);
            minno=no;
            minboy=boy;
        }
    }
 
    printf("%d numarali ogrenci %d cm boyu ile %d cm ye en yakindir.",minno,minboy,tam);
}