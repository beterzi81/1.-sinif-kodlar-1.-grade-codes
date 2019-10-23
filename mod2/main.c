#include <stdio.h>
#include <stdlib.h>

int main()
{
    int girilen_sayi,genelsayac=0,teksayac=0,ciftsayac=0;


    do
    {
        printf("Sayiyi giriniz:\t");
        scanf("%d",&girilen_sayi);
        if (girilen_sayi%2==0)
            ciftsayac++;
        else if (girilen_sayi%2!=0)
            teksayac++;
        genelsayac++;
    }
    while (girilen_sayi!= -1);


    printf("Girdiginiz %d sayidan %d tanesi tek, %d tanesi cifttir!",genelsayac,teksayac,ciftsayac);


    return 0;
}
