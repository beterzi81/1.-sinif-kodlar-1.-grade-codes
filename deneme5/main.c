#include <stdio.h>
#include <stdlib.h>

int main()
{   int x,y,z;
    float a,b,c,sonuc;
        printf("3 adet tam sayi giriniz:");
    scanf("%d %d %d",&x,&y,&z);
        printf("Simdi de 3 adet kesirli sayi giriniz:");
    scanf("%f %f %f",&a, &b, &c);
        sonuc = (z+a/b+2) <= (y+4-3*x/c);
    if (sonuc==0)
        printf("Yanlis!");
    else
        printf("Dogru!");
    return 0;
}
