#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
/*yarıçapı kullanıcıdan alınan dairenin alanını
hesaplayan C programını yazınız*/

int main()
{
    float r,result;

    printf("Lutfen yaricapi giriniz: ");
    scanf("%f",&r);

    result = PI * (r * r);
    printf("Dairenin alani: %.2f",result);
}