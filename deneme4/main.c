#include <stdio.h>
#include <stdlib.h>

int main()
{int ogrenci_puani;
            printf("Ogrencinin notunu giriniz:");
            scanf("%d",&ogrenci_puani);
    if((ogrenci_puani <=65) && (ogrenci_puani >60))
        printf("DD");
    else if ((ogrenci_puani <=70) && (ogrenci_puani >65))
        printf("DC");
    else if ((ogrenci_puani <=75) && (ogrenci_puani >70))
        printf("CC");
    else if ((ogrenci_puani <=80) && (ogrenci_puani >75))
        printf("CB");
    else if ((ogrenci_puani <=85) && (ogrenci_puani >80))
        printf("BB");
    else if ((ogrenci_puani <=90) && (ogrenci_puani >85))
        printf("AB");
    else if ((ogrenci_puani <=100) && (ogrenci_puani >90))
        printf("AA");
    else
        printf("Uygun Deger Girmediniz!");
    return 0;
}
