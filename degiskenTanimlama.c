#include <stdio.h>
#include <stdlib.h>

/*' tip değişken vardır. 
-Global ve Local
-Global değişkenler tüm fonksiyonların
kullanabildiği değişkenlerdir.
Local değişkenler sadece bulundukları fonksiyonda
kullanılabilir.*/

int x;
//tüm fonksiyonda geçerli

void fonksiyon()
{
    int a;
    //Sadece bu fonksiyonda geçerli
}

int main()
{
    char c;
    //Sadece main fonksiyonunda geçerli
    {
        float f;
        //Sadece bu fonksiyonda geçerli
    }
}