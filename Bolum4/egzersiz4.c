#include <stdio.h>
#include <stdlib.h>

/*Klavyeden küçük harfkerle girilen bir cümle
içerisinde en fazla kullanılan karakterleri bulan
C programını yazınız*/

int main()
{
    char a[50];
    int i = 0;
    int enCok;
    char harf;
    int kucukHarf[26] = {0};

    printf("Lutfen bir cumle giriniz: ");
    gets(a);

    while (a[i] != '\0')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            kucukHarf[a[i]-'a']++;
        i++;  
    }

    enCok = 0;
    for(i = 0; i < 26; i++)
    {
        if(kucukHarf[i] != 0)
        {
            if(kucukHarf[i]>enCok)
            {
                enCok=kucukHarf[i];
                harf = i + 'a';
            }
   
        }
    }
    printf("En fazla kullanilan harf: %c",harf);
}