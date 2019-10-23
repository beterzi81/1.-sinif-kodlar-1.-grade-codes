#include <stdio.h>
#include <stdlib.h>

int main()
{
    char secim;
    float mesafe,sonuc;

    printf("Gireceginiz birim mil mi kilometre mi? k/m\n");
    scanf("%c",&secim);

    if (secim =='k')
    {
        printf("Miktari giriniz:\n");
        scanf("%f",&mesafe);
        sonuc= mesafe / 1.6;
        printf("%f kilometre %.5f mildir!\n",mesafe,sonuc);
    }
    else if (secim == 'm')
    {
        printf("Miktari giriniz:\n");
        scanf("%f",&mesafe);
        sonuc = mesafe *1.6;
        printf("%f mil %.5f kilometredir!",mesafe,sonuc);
    }
    else
        printf("Dogru birim secmediniz!");


    return 0;
}
