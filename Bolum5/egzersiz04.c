#include <stdio.h>
#include <stdlib.h>

/*klavyeden girilen taban ve üs değerini hesaplayan C
programını yazınız*/

int ussu(int t,int u)
{
    int r,i;
    
    i = 0;
    r = 1;
    while (i < u)
    {
        r = r * t;
        i++;
    }
    return r;
}

int main()
{
    int taban,us;
    int sonuc;

    printf("Lutfen taban sayisini giriniz: ");
    scanf("%d",&taban);

    printf("Lutfen us sayisini giriniz: ");
    scanf("%d",&us);

    sonuc = ussu(taban,us);
    printf("%d",sonuc);
}