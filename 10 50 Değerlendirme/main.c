#include <stdio.h>
#include <stdlib.h>

int main()
{   int kaset_sayisi;
    printf("Kac adet kasediniz var?");
    scanf("%d" ,&kaset_sayisi);
        if(kaset_sayisi<=10)
            printf("Baya azmis kanka :/");
        else if ((kaset_sayisi>10) && (kaset_sayisi<50))
            printf("Ortalama haci :)");
        else if (kaset_sayisi>=50)
            printf("Vay len :D");
        else
            printf("Ne diyon haci?");

    return 0;
}
