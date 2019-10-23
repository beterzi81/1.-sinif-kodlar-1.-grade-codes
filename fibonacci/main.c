#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,n,i=1,toplam=0;//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
    printf("Kacinci basamaga kadar geleceksiniz:\t");
    scanf("%d",&n);
    printf("0\t");

    while (x<n-1)
    {
        printf("%d\t",i);
        toplam=toplam+i;
        x++;
        if (x<n-1)
        {
            printf("%d\t",toplam);
            i=toplam+i;
            x++;
        }

    }
    return 0;
}
