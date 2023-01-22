#include <stdlib.h>
#include <stdio.h>

/*Kullanıcıdan bir cümle girmesini isteyin 
girilen cümle içindeki harflerin kaç kere yazıldığını
ekrana bastırın*/
int repeat_check(char *c,int i)
{
    int j;

    while (i > 0)
    {
        j = i - 1;
        while (j > 0)
        {
            if (c[i] == c[j])
                return (0);
            j--;
        }
        i--;
    }
    return (1);
}
void ft_print(char *c, int i, int flag)
{
    int r;

    r = i;
    if (c[i] == ' ')
    {
        printf("\n");
    }
    else if (flag > 1)
    {
        if (repeat_check(c,r) == 0)
            printf(" ");
        else
            printf("%c harfi %d kere kullanilmistir.\n",c[i],flag);
    }
    else if (flag == 1)
    {
        if (repeat_check(c,r) == 0)
            printf(" ");
        else
            printf("%c harfi %d kere kullanilmistir.\n",c[i],1);
    }
}

void get_count(char *c)
{
    int i,j;
    int flag;
    i = 0;
   
    while (c[i] != '\0')
    {
        flag = 1;
        j = i + 1;
        while (c[j] != '\0')
        {
            if (c[i] == c[j])
                flag++;
            j++;
        }
        ft_print(c,i,flag);
        i++;
    }
}

int main()
{
    char c[100];

    printf("Lutfen bir cumle giriniz ve enter'a basiniz: ");
    gets(c);

    int i;

    i = 0;
    while (c[i] != '\0')
    {
        printf("%c",c[i]);
        i++;
    }
    printf("%d\n",i);

    get_count(c);
}