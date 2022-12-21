#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   /*
   -İki adet karakter dizisi oluşturun birincisi
   "boonne" ikincisi "soiree" 
   -strcpy ve strncpy kullanarak iki karakter dizini 
   birlestirin
   -elde ettiğiniz karakter dizini ekrana basın*/

   char a[] = "bonne";
   char b[] = "soiree";
   char c[10]= "";
   int i;

   strcpy(c,a);
 
   strncpy(c+3,b,5);

   printf("%s",c);
    
}